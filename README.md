# Smith-Waterman-Cuda
GPU CUDA implementation of the Smith Waterman DNA sequence alignment

To execute, type in:  

g++ parser.cpp -std=c++11 -fsanitize=address

time (./a.out dataset/spike.fasta dataset/pdbaa_sample.fasta BLOSUM62 global -1 b.txt) > time.txt
