import os

def make_submit_sh(srcfile,year,dataset):
    fsrc = open(srcfile,'w')
    fsrc.write('universe = vanilla \n') 
    fsrc.write('executable = execute_script.sh \n')
    fsrc.write('use_x509userproxy = true \n')
    fsrc.write('Arguments = $(Item) '+dataset+'_$(ProcId).txt \n')
    fsrc.write('output = $ENV(PWD)/condor_'+year+'/out/'+dataset+'/'+dataset+'_$(ProcId).out \n')
    fsrc.write('error = $ENV(PWD)/condor_'+year+'/err/'+dataset+'/'+dataset+'_$(ProcId).err \n')
    fsrc.write('log = $ENV(PWD)/condor_'+year+'/log/'+dataset+'/'+dataset+'_$(ProcId).log \n')
    fsrc.write('Requirements = (Machine != "red-node000.unl.edu") \n')
    fsrc.write('Requirements = (Machine != "red-node000.unl.edu" && Machine != "ncm*.hpc.itc.rwth-aachen.de" && Machine != "wn-a2-26-01.brunel.ac.uk" && Machine != "mh-epyc7662-8.t2.ucsd.edu")\n')
    fsrc.write('request_memory = 2 GB \n')
    fsrc.write('transfer_input_files = runGenFilterEfficiencyAnalyzer_cfg.py,cmssw_setup.sh,sandbox-CMSSW_10_2_20_UL-9d39de6.tar.bz2 \n')
    fsrc.write('should_transfer_files = YES \n')
    fsrc.write('when_to_transfer_output = ON_EXIT \n')
    fsrc.write('transfer_output_files = '+dataset+'_$(ProcId).txt \n')
    fsrc.write('transfer_output_remaps = "'+dataset+'_$(ProcId).txt=$ENV(PWD)/condor_'+year+'/txt/'+dataset+'/'+dataset+'_$(ProcId).txt" \n')
    fsrc.write('+REQUIRED_OS="rhel7" \n')
    fsrc.write('queue $(Item) from '+path_to_MINI+year+'/'+dataset+'.txt \n')
    fsrc.close()

path_to_MINI = "../../../MINI/"
dir_list = ["Summer16_102X_SMS/","Fall17_102X_SMS/","Autumn18_102X_SMS/"]
for directory in dir_list:
    #files = [path_to_MINI+directory+f for f in os.listdir(path_to_MINI+directory) if f.endswith(".txt")]
    files = [f for f in os.listdir(path_to_MINI+directory) if f.endswith(".txt")]
    os.system("ls "+path_to_MINI+directory+" > lists_"+directory.replace('/','')+".txt")
    os.system("rm -r condor_"+directory)
    for file in files:
        dataset = file.replace('.txt','')
        os.system("mkdir -p condor_"+directory+'src/'+dataset+'/')
        os.system("mkdir -p condor_"+directory+'out/'+dataset+'/')
        os.system("mkdir -p condor_"+directory+'err/'+dataset+'/')
        os.system("mkdir -p condor_"+directory+'log/'+dataset+'/')
        os.system("mkdir -p condor_"+directory+'txt/'+dataset+'/')
        srcfile = "condor_"+directory+"src/"+dataset+".submit"
        make_submit_sh(srcfile,directory.replace('/',''),dataset)
        os.system("condor_submit "+srcfile)
