# micro-benchmark
Another High Performance Computing assignment, written entirely myself. Here I create a micro-benchmark to test the performance of passing a function to an algorithm vs passing a lambda. Unsurprisingly, the lambda performs considerably better due to the compiler's ability to rewrite code and inline the lambda. By doing this, loss of performance due to branching is avoided. This sort of inlining is not possible when passing a function, and so time is lost to branching as the queued instructions must be flushed from the pipeline and the new instructions loaded in.

If your'e not familiar with micro-benchmarks, the reason that the algorithm was called so many times and repeated within the loop was to reduce the extraneous noise of the other computations on the performance metrics that we were trying to test. For instance, each time we reach the end of a loop, the program-counter is moved, constituting an extra branching operation (which adds time). The more we called the algorithm inside of the loop, the less impactful the extra branch was to the study.

The three bash scripts called in this example each record different meta information about the performance of the job. Results from these commands can be found in the results folder.

hw3.bash: This script calls the linux perf command to collect common metrics like banches, branch misses, context-switches, and runtime.
hw3_profile.bash: This job was run to generate a profile on the program using callgrind so that performance could be analyzed appropriately. It will create a callgrind.out.---- file, which was run using `qcachegrind callgrind.out.----` to generate a graphical visualization of the performance metadata
hw3_time.bash: This script runs /usr/bin/time on the script to record important metrics such as system time, user time, and peak memory usage.

NOTE: If you want to run this yourself and replicate my results, be sure to remember the -O3 optimization flag when compiling:
```
g++ -g -Wall -std=c++14 -O3 homework3.cpp -o hw3
```
It is suggested that you use "hw3" for the executable name to ensure compatibility with the bash scripts.
