import os
import sys
import fileinput
from optparse import OptionParser

#options                                                                                                                           
parser = OptionParser()
parser.add_option("-i", "--idir", dest="directory",
                  help="Specify input directory containing the dataset .txt files.", metavar="IPATH")

parser.add_option("-o", "--odir", dest="output", default=".",
                  help="Specify output directory where .txt and .list files are going to be written.", metavar="OPATH")


(options, args) = parser.parse_args()

directory = options.directory
output = options.output
yeartag = ''
year = ''
alltxtfiles = []
MINI = False

if not directory:
    sys.exit("You need to specify the directory! (See help).")

if "data" in directory:
    for filename in os.listdir(directory):
        outpath='{opath}'.format(opath=output)
        if filename.endswith(".txt"):
            print(os.path.join(directory,filename))
            with open(os.path.join(directory,filename), 'r') as handle:
                for line in handle:
                    name = line.strip('/').split()
                    for ds in name:
                        dataset = ds.split("/Run")[0]
                        tag = ds.split("/NANO")[0]
                        tag = tag.split(dataset+"/")[1]
                        if "2022" in tag:
                            year = '2022'
                            yeartag = 'Summer22'
                        if "2023" in tag:
                            year = '2023'
                            yeartag = 'Summer23'
                        else:
                            continue
                        outpath = "samples/NANO/"
                        if not os.path.isdir(outpath+yeartag+"_130X_Data/"+dataset+"/"):
                            os.system("mkdir -p "+outpath+yeartag+"_130X_Data/"+dataset+"/")
                        dasgo = "dasgoclient -query \"file dataset = /"+dataset+"/"+tag+"/NANOAOD\" >> temp.txt"
                        os.system(dasgo)
                        temp = open("temp.txt","r")
                        os.system("touch "+outpath+yeartag+"_130X_Data/"+dataset+"/"+dataset+"_"+tag+"_"+year+".txt")
                        for temp_line in temp:
                            dsfile = open(outpath+yeartag+"_130X_Data/"+dataset+"/"+dataset+"_"+tag+"_"+year+".txt",'a+')
                            new_line = "root://cmsxrootd.fnal.gov/" + temp_line
                            #new_line = "root://cmsxrootd.fnal.gov/" + temp_line + "\n"
                            dsfile.write(new_line)
                        dsfile.close()
                        temp.close()
                        os.system("rm temp.txt")
                        #make root text file list
                        txtfiles=[]
                        for filename in os.listdir("samples/NANO/"+yeartag+"_130X_Data/"+dataset+"/"):
                            if filename.endswith(".txt"):
                                txtfiles.append(os.path.join(("samples/NANO/"+yeartag+"_130X_Data/"+dataset+"/").format(d=directory),filename))
                                alltxtfiles.append(os.path.join(("samples/NANO/"+yeartag+"_130X_Data/"+dataset+"/").format(d=directory),filename))
                        if not os.path.isdir("samples/NANO/Lists/"):
                            os.makedirs("samples/NANO/Lists/")
                        txtfiles.sort()
                        with open(("samples/NANO/Lists/"+yeartag+"_130X_Data_"+dataset+".list"), 'w') as filehandle:
                            for listitem in txtfiles:
                                filehandle.write('%s\n' % listitem)
        if not os.path.isdir("samples/NANO/Lists/"):
            os.makedirs("samples/NANO/Lists/")
        alltxtfiles = list(set(alltxtfiles))
        alltxtfiles.sort()
        with open(("samples/NANO/Lists/"+yeartag+"_130X_Data"+".list"), 'w') as filehandle:
            for listitem in alltxtfiles:
                filehandle.write('%s\n' % listitem)
        alltxtfiles = []

else:
    for filename in os.listdir(directory):
        if "2022_EE" in filename:
            yeartag = 'Summer22_EE'
        elif "2022" in filename:
            yeartag = 'Summer22'
        elif "2023_BPix" in filename:
            yeartag = 'Summer23_BPix'
        elif "2023" in filename:
            yeartag = 'Summer23'
        else:
            continue
    
        if filename.endswith(".txt"):
            print(os.path.join(directory,filename))
            with open(os.path.join(directory,filename), 'r') as handle:
                for line in handle:
                    if(line[0] == "#"): continue
                    if 'BPix' in yeartag:
                        if MINI:
                            os.system('dasgoclient -query="dataset=/{ds_name}/Summer23*BPix*Mini*/*MINI*" >> {ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n'),year=yeartag))
                        else:
                            os.system('dasgoclient -query="dataset=/{ds_name}/*Summer23*BPix*AODv12*/*NANO*" >> {ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n'),year=yeartag))
                            if os.stat('{ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n'),year=yeartag)).st_size == 0:
                                print("NanoAOD not available for: "+str(line.rstrip('\n')))
                            #    print("NanoAODv9 not available for: "+str(line.rstrip('\n')))
                            #    os.system('dasgoclient -query="dataset=/{ds_name}/*Summer20UL16*APV*AODv8*/*NANO*" >> {ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n'),year=yeartag))
                            #    if os.stat('{ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n'),year=yeartag)).st_size == 0:
                            #        os.system('dasgoclient -query="dataset=/{ds_name}/*Summer20UL16*APV*Nano*/*NANO*" >> {ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n'),year=yeartag))
                            #        if os.stat('{ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n'),year=yeartag)).st_size == 0:
                            #            print("NanoAOD not available for: "+str(line.rstrip('\n')))
                        with open('{ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n')), 'r') as datasetlist:
                            for dataset in datasetlist:
                                if("JME" in dataset): continue
                                os.system('dasgoclient -query="file dataset={ds_loc}" >> {ds_name}.txt'.format(ds_loc=dataset.rstrip('\n'),ds_name=line.rstrip('\n')))
                        if MINI:
                            os.system('dasgoclient -query="dataset=/{ds_name}/*{year}*MiniAODv4*/*MINI*" >> {ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n'),year=yeartag))
                            if os.stat('{ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n'),year=yeartag)).st_size == 0:
                                os.system('dasgoclient -query="dataset=/{ds_name}/*{year}*MiniAODv3*/*MINI*" >> {ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n'),year=yeartag))
                                if os.stat('{ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n'),year=yeartag)).st_size == 0:
                                    os.system('dasgoclient -query="dataset=/{ds_name}/*{year}*Mini*/*MINI*" >> {ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n'),year=yeartag))
                        else:
                            os.system('dasgoclient -query="dataset=/{ds_name}/*{year}*AODv12*/*NANO*" >> {ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n'),year=yeartag))
                            if os.stat('{ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n'),year=yeartag)).st_size == 0:
                                print("NanoAOD not available for: "+str(line.rstrip('\n')))
                                #print("NanoAODv9 not available for: "+str(line.rstrip('\n')))
                                #os.system('dasgoclient -query="dataset=/{ds_name}/*{year}*AODv8*/*NANO*" >> {ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n'),year=yeartag))
                                #if os.stat('{ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n'),year=yeartag)).st_size == 0:
                                #    os.system('dasgoclient -query="dataset=/{ds_name}/*{year}*Nano*/*NANO*" >> {ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n'),year=yeartag))
                                #    if os.stat('{ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n'),year=yeartag)).st_size == 0:
                                #        print("NanoAOD not available for: "+str(line.rstrip('\n')))
                        with open('{ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n')), 'r') as datasetlist:
                            for dataset in datasetlist:
                                if("JME" in dataset): continue
                                os.system('dasgoclient -query="file dataset={ds_loc}" >> {ds_name}.txt'.format(ds_loc=dataset.rstrip('\n'),ds_name=line.rstrip('\n')))
                    elif 'EE' in yeartag:
                        if MINI:
                            os.system('dasgoclient -query="dataset=/{ds_name}/Summer22*EE*Mini*/*MINI*" >> {ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n'),year=yeartag))
                        else:
                            os.system('dasgoclient -query="dataset=/{ds_name}/*Summer22*EE*AODv12*/*NANO*" >> {ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n'),year=yeartag))
                            if os.stat('{ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n'),year=yeartag)).st_size == 0:
                                print("NanoAOD not available for: "+str(line.rstrip('\n')))
                            #    print("NanoAODv9 not available for: "+str(line.rstrip('\n')))
                            #    os.system('dasgoclient -query="dataset=/{ds_name}/*Summer20UL16*APV*AODv8*/*NANO*" >> {ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n'),year=yeartag))
                            #    if os.stat('{ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n'),year=yeartag)).st_size == 0:
                            #        os.system('dasgoclient -query="dataset=/{ds_name}/*Summer20UL16*APV*Nano*/*NANO*" >> {ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n'),year=yeartag))
                            #        if os.stat('{ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n'),year=yeartag)).st_size == 0:
                            #            print("NanoAOD not available for: "+str(line.rstrip('\n')))
                        with open('{ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n')), 'r') as datasetlist:
                            for dataset in datasetlist:
                                if("JME" in dataset): continue
                                os.system('dasgoclient -query="file dataset={ds_loc}" >> {ds_name}.txt'.format(ds_loc=dataset.rstrip('\n'),ds_name=line.rstrip('\n')))
                        if MINI:
                            os.system('dasgoclient -query="dataset=/{ds_name}/*{year}*MiniAODv4*/*MINI*" >> {ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n'),year=yeartag))
                            if os.stat('{ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n'),year=yeartag)).st_size == 0:
                                os.system('dasgoclient -query="dataset=/{ds_name}/*{year}*MiniAODv3*/*MINI*" >> {ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n'),year=yeartag))
                                if os.stat('{ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n'),year=yeartag)).st_size == 0:
                                    os.system('dasgoclient -query="dataset=/{ds_name}/*{year}*Mini*/*MINI*" >> {ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n'),year=yeartag))
                        else:
                            os.system('dasgoclient -query="dataset=/{ds_name}/*{year}*AODv12*/*NANO*" >> {ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n'),year=yeartag))
                            if os.stat('{ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n'),year=yeartag)).st_size == 0:
                                print("NanoAOD not available for: "+str(line.rstrip('\n')))
                                #print("NanoAODv9 not available for: "+str(line.rstrip('\n')))
                                #os.system('dasgoclient -query="dataset=/{ds_name}/*{year}*AODv8*/*NANO*" >> {ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n'),year=yeartag))
                                #if os.stat('{ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n'),year=yeartag)).st_size == 0:
                                #    os.system('dasgoclient -query="dataset=/{ds_name}/*{year}*Nano*/*NANO*" >> {ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n'),year=yeartag))
                                #    if os.stat('{ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n'),year=yeartag)).st_size == 0:
                                #        print("NanoAOD not available for: "+str(line.rstrip('\n')))
                        with open('{ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n')), 'r') as datasetlist:
                            for dataset in datasetlist:
                                if("JME" in dataset): continue
                                os.system('dasgoclient -query="file dataset={ds_loc}" >> {ds_name}.txt'.format(ds_loc=dataset.rstrip('\n'),ds_name=line.rstrip('\n')))
                    else:
                        if MINI:
                            os.system('dasgoclient -query="dataset=/{ds_name}/*{year}*MiniAODv4*/*MINI*" >> {ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n'),year=yeartag))
                            if os.stat('{ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n'),year=yeartag)).st_size == 0:
                                os.system('dasgoclient -query="dataset=/{ds_name}/*{year}*MiniAODv3*/*MINI*" >> {ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n'),year=yeartag))
                                if os.stat('{ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n'),year=yeartag)).st_size == 0:
                                    os.system('dasgoclient -query="dataset=/{ds_name}/*{year}*Mini*/*MINI*" >> {ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n'),year=yeartag))
                        else:
                            os.system('dasgoclient -query="dataset=/{ds_name}/*{year}NanoAODv12*/*NANO*" >> {ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n'),year=yeartag))
                            if os.stat('{ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n'),year=yeartag)).st_size == 0:
                                print("NanoAOD not available for: "+str(line.rstrip('\n')))
                                #print("NanoAODv7 not available for: "+str(line.rstrip('\n')))
                                #os.system('dasgoclient -query="dataset=/{ds_name}/*{year}*AODv4*/*NANO*" >> {ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n'),year=yeartag))
                                #if os.stat('{ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n'),year=yeartag)).st_size == 0:
                                #    os.system('dasgoclient -query="dataset=/{ds_name}/*{year}*Nano*/*NANO*" >> {ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n'),year=yeartag))
                                #    if os.stat('{ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n'),year=yeartag)).st_size == 0:
                                #        print("NanoAOD not available for: "+str(line.rstrip('\n')))
                        with open('{ds_name}_dataset.txt'.format(ds_name=line.rstrip('\n')), 'r') as datasetlist:
                            for dataset in datasetlist:
                                if("JME" in dataset): continue
                                os.system('dasgoclient -query="file dataset={ds_loc}" >> {ds_name}.txt'.format(ds_loc=dataset.rstrip('\n'),ds_name=line.rstrip('\n')))
    
        os.system('rm *dataset.txt')
        if "sms" in directory:
            outpath='{opath}/{year}_130X_SMS'.format(opath=output, year=yeartag)
        else:
            outpath='{opath}/{year}_130X'.format(opath=output, year=yeartag)
        if not os.path.exists(outpath):                           
            os.system('mkdir -p {opath}'.format(opath=outpath))
        os.system('mv *.txt {opath}'.format(opath=outpath))
        os.system('python3 addPath.py -p {opath}'.format(opath=outpath))
    
    os.system('cp -r *130X* samples/NANO/')
    os.system('rm -r *130X*')
    
