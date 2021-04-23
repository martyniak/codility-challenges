#include <stdio.h>
#include <stdlib.h>
#include "permutation_missing_element.h"

int solution(int A[], int N)
{
    int i;
    int result = ((N + 1) * ((N + 1) + 1)) / 2;

    for(i = 0; i < N; i++)
        result -= A[i];

    return result;
}
