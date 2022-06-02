#!/bin/sh
export SCRAM_ARCH=slc7_amd64_gcc700
source /cvmfs/cms.cern.ch/cmsset_default.sh

source ./cmssw_setup.sh

cmssw_setup sandbox-CMSSW_10_2_20_UL-9d39de6.tar.bz2

/cvmfs/cms.cern.ch/slc7_amd64_gcc700/cms/cmssw/CMSSW_10_2_20_UL/bin/slc7_amd64_gcc700/cmsRun runGenFilterEfficiencyAnalyzer_cfg.py inputFiles="$1" > "$2"
