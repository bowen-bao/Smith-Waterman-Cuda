# Smith-Waterman-Cuda
Implementation of the local Smith-Waterman and global ‎Needleman–Wunsch DNA sequence alignment

## Execution

Run the command:

**$ g++ parser.cpp -std=c++11 -fsanitize=address**

**$ time (./a.out dataset/spike.fasta dataset/pdbaa_sample.fasta BLOSUM62 global -1 output.txt) > time.txt**


Usage: ./a.out queryfile databasefile scoringmatrix alignment gappenalty outputfile

       queryfile = file for query sequence 

       databasefile = file for database to search query against 

       scoringmatrix = 'PAM250' or 'BLOSUM62' 

       alignment = 'global' or 'local' 

       gappenalty = negative integer gap penalty for misaligned characters 

       outputfile = file for output 