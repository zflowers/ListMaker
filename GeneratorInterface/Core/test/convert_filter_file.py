import os

dir_list = ["Autumn18_102X_SMS/","Fall17_102X_SMS/","Summer16_102X_SMS/"]

for directory in dir_list:
    for filename in os.listdir("condor_"+directory+"/txt/"):
        os.system("cat condor_"+directory+"/txt/"+filename+"/*.txt > condor_"+directory+"/txt/"+filename+".txt")
        if not os.path.isdir(directory):
            os.system("mkdir "+directory)
        f = open(os.path.join(directory+filename+".txt"),"w+")
        section = []
        block = []
        N_total = []
        N_passed = []
        N_failed = []
        eff = []
        with open(os.path.join("condor_"+directory+"/txt/"+filename+".txt"), 'r') as handle:
            for line in handle:
                if 'Lumi section' in line:
                    section_block = line.replace('Lumi section run: ','')
                    section_block = section_block.replace(' luminosityBlock:','')
                    section.append(section_block.split()[0])
                    block.append(section_block.split()[1])
                if 'N total' in line:
                    N_block = line.replace('N total = ','')
                    N_block = N_block.replace('N passed = ','')
                    N_block = N_block.replace('N failed = ','')
                    N_total.append(N_block.split()[0])
                    N_passed.append(N_block.split()[1])
                    N_failed.append(N_block.split()[2])
                if 'Generator filter eff' in line:
                    eff_line = line.replace('Generator filter efficiency = ','')
                    eff.append(eff_line.split()[0])
        for i in range(len(section)):
            f.write(block[i]+","+eff[i]+","+N_total[i]+","+N_passed[i]+","+N_failed[i]+'\n')
        #print("cp condor_"+directory+"*.txt "+directory)
