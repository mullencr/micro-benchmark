#!/bin/bash

#PBS -N hw3_03_profiler
#PBS -l walltime=0:30:00
#PBS -l mem=128MB
#PBS -l nodes=1:ppn=1
#PBS -S /bin/bash
#PBS -j oe

# Change to directory from where PBS job was submitted
cd $PBS_O_WORKDIR

# Run the benchmark once in each configuration
echo "----------------[ Callgrind for function ]---------------------"
valgrind --tool=callgrind ./hw3 function 85
echo "----------------[ Callgrind for lambda ]---------------------"
valgrind --tool=callgrind ./hw3 lambda 85

#end of script

