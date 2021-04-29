To make lists of files for datasets run:

python batchList.py -i DataSetsList/bkg/ && python batchList.py -i DataSetsList/sms/ && python batchList.py -i DataSetsList/data/ 

To Make Filter Eff Files:

Use batchlist to make lists of MINIAOD files for SMS samples

Then go to: GeneratorInterface/Core/test/

run make_filter_file.py

