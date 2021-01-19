#!/bin/bash
#
#SBATCH --mail-user=bbao@cs.uchicago.edu
#SBATCH --mail-type=ALL
#SBATCH --output=/home/bbao/slurm/out/%j.%N.stdout
#SBATCH --error=/home/bbao/slurm/out/%j.%N.stderr
#SBATCH --workdir=/home/bbao/Smith-Waterman-Cuda
#SBATCH --partition=titan
#SBATCH --job-name=get_simple_add

cuda_version=9.2
export CUDA_HOME=/usr/local/cuda-${cuda_version}
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$CUDA_HOME/lib64

nvcc simple_add.cu -o simple_add
./simple_add
rm simple_add