tar -xzf config_Fall17_102X_SMS.tgz

export SCRAM_ARCH=slc7_amd64_gcc700
source /cvmfs/cms.cern.ch/cmsset_default.sh

source ./config_Fall17_102X_SMS/cmssw_setup.sh

cmssw_setup config_Fall17_102X_SMS/sandbox-CMSSW_10_2_20_UL-9d39de6.tar.bz2

/cvmfs/cms.cern.ch/slc7_amd64_gcc700/cms/cmssw/CMSSW_10_2_20_UL/bin/slc7_amd64_gcc700/cmsRun config_Fall17_102X_SMS/runGenFilterEfficiencyAnalyzer_cfg.py inputFiles=config_Fall17_102X_SMS/"$@" > "$@"
