import os
import fileinput
import sys
from optparse import OptionParser

#options
parser = OptionParser()
parser.add_option("-p", "--path", dest="directory", 
                  help="Specify input directory containing the .txt files.", metavar="PATH")

(options, args) = parser.parse_args()

directory = options.directory

if not directory:
    sys.exit("You need to specify the directory! (See help).")

txtfiles=[]

list_name = directory
if "./" in list_name:
    list_name = list_name.replace("./","")

#loop over input files and add xrootd to root file path
for filename in os.listdir(directory):
    if filename.endswith(".txt"):
        txtfiles.append(os.path.join(("samples/NANO/"+list_name+"/").format(d=directory),filename))
        for line in fileinput.input([os.path.join(directory, filename)], inplace=True):
            if 'root://cmsxrootd.fnal.gov/' in line:
                sys.stdout.write('{l}'.format(l=line))
            else:
                sys.stdout.write('root://cmsxrootd.fnal.gov/{l}'.format(l=line))
    else:
        continue

##make root text file list
if not os.path.isdir("samples/NANO/Lists/"):
    os.makedirs("samples/NANO/Lists/")
txtfiles.sort()
with open(("samples/NANO/Lists/"+list_name+".list"), 'w') as filehandle:
    for listitem in txtfiles:
        filehandle.write('%s\n' % listitem)
