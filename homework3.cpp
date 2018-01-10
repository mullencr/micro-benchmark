// Copyright 2017 Charles Mullenix

/* 
 * File:   homework3.cpp
 * Author: mulle
 *
 * Created on September 23, 2017, 6:03 PM
 */

#include <cstdlib>
#include <string>
#include <vector>
#include <algorithm>

std::vector<int> vec_init(const int VecSize);
bool lessThan(const int a, const int b);
bool greaterThan(const int a, const int b);
void runLambdaTest(std::vector<int>& vec);
void runFunctionTest(std::vector<int>& vec);

/*
 * 
 */
int main(int argc, char** argv) {
    const int numRuns = (argc > 2 ? std::stoi(argv[2]) : 30);
    const int VecSize = 500000;
    std::string cmd = "function";
    std::vector<int> vec = vec_init(VecSize);
    if (argc > 1 && argv[1] == cmd) {
        for (int i = 0; i < numRuns; i++)
            runFunctionTest(vec);
    } else {
        for (int i = 0; i < numRuns; i++)
            runLambdaTest(vec);
    }
    return 0;
}

void runLambdaTest(std::vector<int>& vec) {
    std::sort(vec.begin(), vec.end(), [](int a, int b) { return a > b; });
    std::sort(vec.begin(), vec.end(), [](int a, int b) { return a < b; });
    std::sort(vec.begin(), vec.end(), [](int a, int b) { return a > b; });
    std::sort(vec.begin(), vec.end(), [](int a, int b) { return a < b; });
    std::sort(vec.begin(), vec.end(), [](int a, int b) { return a > b; });
    std::sort(vec.begin(), vec.end(), [](int a, int b) { return a < b; });
    std::sort(vec.begin(), vec.end(), [](int a, int b) { return a > b; });
    std::sort(vec.begin(), vec.end(), [](int a, int b) { return a < b; });
}

void runFunctionTest(std::vector<int>& vec) {
    std::sort(vec.begin(), vec.end(), greaterThan);
    std::sort(vec.begin(), vec.end(), lessThan);
    std::sort(vec.begin(), vec.end(), greaterThan);
    std::sort(vec.begin(), vec.end(), lessThan);
    std::sort(vec.begin(), vec.end(), greaterThan);
    std::sort(vec.begin(), vec.end(), lessThan);
    std::sort(vec.begin(), vec.end(), greaterThan);
    std::sort(vec.begin(), vec.end(), lessThan);
}

std::vector<int> vec_init(const int VecSize) {
    std::vector<int> v;
    for (int i = 0; i < VecSize; i++)
        v.push_back(i);
    return v;
}

bool lessThan(const int a, const int b) {
    return a < b;
}

bool greaterThan(const int a, const int b) {
    return a > b;
}

