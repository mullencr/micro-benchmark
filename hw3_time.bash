#!/bin/bash

#PBS -N hw3_03_time
#PBS -l walltime=0:10:00
#PBS -l mem=128MB
#PBS -l nodes=1:ppn=1
#PBS -S /bin/bash
#PBS -j oe

# Change to directory from where PBS job was submitted
cd $PBS_O_WORKDIR

# Run the benchmark
#echo "-----------------------[ Output of time for Function ]--------------------"
#/usr/bin/time -v ./hw3 function 85
#echo "-----------------------[ Output of time for Function ]--------------------"
#/usr/bin/time -v ./hw3 function 85
#echo "-----------------------[ Output of time for Function ]--------------------"
#/usr/bin/time -v ./hw3 function 85

echo "-----------------------[ Output of time for Lambda ]--------------------"
/usr/bin/time -v ./hw3 lambda 85
echo "-----------------------[ Output of time for Lambda ]--------------------"
/usr/bin/time -v ./hw3 lambda 85
echo "-----------------------[ Output of time for Lambda ]--------------------"
/usr/bin/time -v ./hw3 lambda 85

#end of script

