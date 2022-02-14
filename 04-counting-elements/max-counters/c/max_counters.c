#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "max_counters.h"

struct Results solution(int N, int A[], int M)
{
    int i, j, index;
    int maxCounter=0, prvMaxCounter=0;
    struct Results result;

    result.C = (int*) malloc (N * sizeof(int));
    memset(result.C, 0, N * sizeof(int));
    result.L = N;

    for (i = 0; i < M; i++) {
        index = A[i] - 1;
        if (0 <= index && index <= N - 1) {
            result.C[index]++;
            if (maxCounter < result.C[index]) {
                prvMaxCounter = maxCounter;
                maxCounter = result.C[index];
            }
        } else {
            if (A[i] == N + 1 && maxCounter != prvMaxCounter) {
                for(j = 0; j < N; j++)
                    result.C[j] = maxCounter;
            }
        }
    }
    return result;
}
