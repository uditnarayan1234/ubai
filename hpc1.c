#include <stdio.h>
#include <omp.h>

#define N 50

int main() {
    int sum = 0;
    
    #pragma omp parallel for reduction(+:sum)
    for (int i = 1; i <= N; i++) {
        sum += i;
    }
    
    printf("Sum of first %d natural numbers is: %d\n", N, sum);
    return 0;
}