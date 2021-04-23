#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "tape_equilibrium.h"

int solution(int A[], int N)
{
    int i;
    int min = INT_MAX;
    int sum = 0, temp = 0, p;

    for(i = 0; i < N; i++)
        sum += A[i];

    for(i = 0; i < N-1; i++) {
        temp += A[i];
        p = abs(sum - temp - temp);
        if (p < min)
            min = p;
    }

    return min;
}
