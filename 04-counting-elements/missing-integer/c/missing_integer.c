#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "merge_sort.h"
#include "missing_integer.h"

int solution(int A[], int N)
{
    int i;
    int smallest = 1;

    merge_sort(A, 0, N - 1);

    for (i = 0; i < N; i++)
    {
        if (A[i] == smallest)
            smallest++;
    }

    return smallest;
}
