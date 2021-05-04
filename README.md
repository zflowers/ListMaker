This repo needs to be inside of a CMSSW directory and most scripts require a grid cert to run

To make lists of files for datasets run:

python batchList.py -i DataSetsList/bkg/ && python batchList.py -i DataSetsList/sms/ && python batchList.py -i DataSetsList/data/ 

To Make Filter Eff Files:

Use batchlist to make lists of MINIAOD files for SMS samples

python batchList.py -i DataSetsList/sms/ -o MINI
(ignore warnings)

Then go to: GeneratorInterface/Core/test/

run make_filter_file.py

nohup python make_filter_file.py > make_filter_file.out & 
