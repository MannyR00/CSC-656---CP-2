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
   printf(" inside sum_indirect problem_setup, N=%lld \n", N);
    for (int j = 0; j < N-1; j++) {
        A[j] = lrand48() % N; // Generate random numbers and store in array A
    }
}

int64_t
sum(int64_t N, uint64_t A[])
{

    int64_t sum = 0;
    printf(" inside sum_vector perform_sum, N=%lld \n", N);

    int64_t index = A[0];
    for (int i = 0; i < N; i++) {
        sum += A[index];  // Adds A[index] to the accumulator
        index = A[index];  // This will assign index ~ A[index]
    }

    return sum;
}
