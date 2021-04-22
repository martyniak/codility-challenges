#include <stdio.h>
#include <stdlib.h>
#include "cyclic_rotation.h"

struct Results solution(int A[], int N, int K)
{
    struct Results result;
    int i, newIndex;

    result.A = (int*) malloc(N * sizeof(int));;
    result.N = N;

    for (i = 0; i < N; i++) {
        newIndex = (i + K) % N;
        result.A[newIndex] = A[i];
    }

    return result;
}
