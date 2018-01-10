#!/bin/bash

#PBS -N hw3_00_run
#PBS -l walltime=1:05:40
#PBS -l mem=128MB
#PBS -l nodes=1:ppn=1
#PBS -S /bin/bash
#PBS -j oe

# Change to directory from where PBS job was submitted
cd $PBS_O_WORKDIR

# Run the benchmark once in each configuration
echo "----------------[ Output from perf for function ]---------------------"
perf stat ./hw3 function 85
perf stat ./hw3 function 85
perf stat ./hw3 function 85
perf stat ./hw3 function 85
perf stat ./hw3 function 85
echo "----------------[ Output from perf for lambda ]---------------------"
perf stat ./hw3 lambda 85
perf stat ./hw3 lambda 85
perf stat ./hw3 lambda 85
perf stat ./hw3 lambda 85
perf stat ./hw3 lambda 85

#end of script

