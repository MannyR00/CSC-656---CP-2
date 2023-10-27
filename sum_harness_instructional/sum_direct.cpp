//
//
//
// Luis Ramirez
// 656 Section 1, Coding Project #2
// 10/15/23
// 1-sentence description here: this code gives us our total sum in direct form.
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
   printf(" inside direct_sum problem_setup, N=%lld \n", N);
}

int64_t
sum(int64_t N, uint64_t A[])
{

   printf(" inside direct_sum perform_sum, N=%lld \n", N);
   // We have to initialize sum in order to keep track of it.
    int64_t sum = 0;
    for (int i = 0; i < N; i++){
        // Everytime we iterate through A, we add it back into sum.
        sum += i;
    }

    return sum;
}

