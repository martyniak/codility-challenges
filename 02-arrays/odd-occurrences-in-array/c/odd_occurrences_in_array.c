#include <stdio.h>
#include <stdlib.h>
#include "odd_occurrences_in_array.h"

int solution(int A[], int N)
{
    int result = 0, i;
    for (i = 0; i < N; i++) {
        result ^= A[i];
    }
    return result;
}
