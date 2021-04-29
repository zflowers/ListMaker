import FWCore.ParameterSet.Config as cms
import FWCore.Utilities.FileUtils as FileUtils
import FWCore.ParameterSet.VarParsing as VarParsing

process = cms.Process("GenFilterEfficiency")

options = VarParsing.VarParsing('analysis')
options.inputFiles = ''
options.parseArguments()

process.load("FWCore.MessageLogger.MessageLogger_cfi")
process.MessageLogger.cerr.FwkReport.reportEvery = 10000

process.maxEvents = cms.untracked.PSet(
    input = cms.untracked.int32(-1)
)

filelist = FileUtils.loadListFromFile(options.inputFiles[0])
process.source = cms.Source("PoolSource",
    fileNames = cms.untracked.vstring(*filelist)
)

process.dummy = cms.EDAnalyzer("GenFilterEfficiencyAnalyzer",
                               genFilterInfoTag = cms.InputTag("genFilterEfficiencyProducer")
)

process.p = cms.Path(process.dummy)

