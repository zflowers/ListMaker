import os

path_to_MINI = "../../../MINI/"
dir_list = ["Summer16_102X_SMS/","Fall17_102X_SMS/","Autumn18_102X_SMS/"]
for directory in dir_list:
    files = [path_to_MINI+directory+f for f in os.listdir(path_to_MINI+directory) if f.endswith(".txt")]
    os.system("mkdir "+directory)
    for f in files:
        os.system("cmsRun runGenFilterEfficiencyAnalyzer_cfg.py inputFiles="+f+" > "+f.replace(path_to_MINI,''))
