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
   printf(" inside sum_vector problem_setup, N=%lld \n", N);
    // This will initialize the array A and add 0 to A[0], 1 to A[1]...etc, all the way to 5.
   for(int i = 0; i < N; i++) {
        A[i] = i;

    }
}

int64_t
sum(int64_t N, uint64_t A[])
{
    int64_t sum = 0;
    // This will go through each element of the array and add it back into the current element which is i.
    for (int i = 0; i < N; i++) {
        sum += i;
    }
    printf(" inside sum_indirect perform_sum, N=%lld \n", N);

    return sum;
}

