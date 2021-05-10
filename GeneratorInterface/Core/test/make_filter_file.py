import os

path_to_MINI = "../../../MINI/"
dir_list = ["Summer16_102X_SMS/","Fall17_102X_SMS/","Autumn18_102X_SMS/"]
for directory in dir_list:
    files = [path_to_MINI+directory+f for f in os.listdir(path_to_MINI+directory) if f.endswith(".txt")]
    os.system("ls "+path_to_MINI+directory+" > lists_"+directory.replace('/','')+".txt")
    os.system("rm config_"+directory)
    os.system("mkdir config_"+directory)
    os.system("mkdir condor_"+directory)
    os.system("cp cmssw_setup.sh config_"+directory)
    os.system("cp sandbox-CMSSW_10_2_20_UL-9d39de6.tar.bz2 config_"+directory)
    os.system("cp runGenFilterEfficiencyAnalyzer_cfg.py config_"+directory)
    os.system("cp -r "+path_to_MINI+directory+"* config_"+directory)
    os.system("tar -czf config_"+directory.replace('/','')+".tgz config_"+directory)
    os.system("rm -r config_*SMS/")
