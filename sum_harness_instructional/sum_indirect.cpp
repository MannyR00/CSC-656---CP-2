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
}

int64_t access(int64_t a){
    a = 1;
    return a;
}

int64_t
sum(int64_t N, uint64_t A[])
{
    int64_t sum = 0;
    for (int i = 0; i < N; i++) {
        sum += i;
    }
   printf(" inside sum_indirect perform_sum, N=%lld \n", N);
//    std::cout << " Sum = " << sum << std::endl;

    return sum;
}

