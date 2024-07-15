This repo needs to be inside of a CMSSW directory and most scripts require a grid cert to run

To make lists of files for datasets run:

python3 batchList.py -i DataSetsList/bkg/ && python3 batchList.py -i DataSetsList/sms/ && python3 batchList.py -i DataSetsList/data/ 

To Make Filter Eff Files:

Use batchlist to make lists of MINIAOD files for SMS samples

python3 batchList.py -i DataSetsList/sms/ -o MINI
(ignore warnings)

Then go to: GeneratorInterface/Core/test/ and then run:

python3 make_filter_file.py

Finally run:

python3 convert_filter_file.py
