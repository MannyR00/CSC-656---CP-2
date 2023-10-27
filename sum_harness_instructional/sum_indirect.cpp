//
// 
//
// Luis Ramirez
// 656 Section 1, Coding Project #2
// 10/15/23
// 1-sentence description here: this code gives us our total sum in vector form.
//

#include <algorithm>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <random>
#include <vector>
#include <string.h>


void 
setup(int64_t N, uint64_t A[])
{
    srand48(time(0));
   printf(" inside sum_indirect problem_setup, N=%lld \n", N);
    for (int j = 0; j < N; j++) {
        A[j] = lrand48() % N;
    }
}

int64_t
sum(int64_t N, uint64_t A[])
{
    int64_t index = A[0];
    int64_t sum = 0;
    printf(" inside sum_vector perform_sum, N=%lld \n", N);

    for (int i = 0; i < N; i++) {
        sum += A[index];  // Adds A[index] to the accumulator
        index = A[index];  // This will assign index to A[index]
    }

    return sum;
}
