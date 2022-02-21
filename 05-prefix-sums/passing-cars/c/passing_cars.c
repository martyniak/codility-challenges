#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "passing_cars.h"

int solution(int A[], int N)
{
    int i;
    unsigned int east = 0;
    unsigned int pairs = 0;

    for (i = 0; i < N; i++) {
        if (A[i] == 0)
            east += 1;

        if (A[i] == 1)
            pairs += east;

        if (pairs > 1000000000)
            return -1;
    }

    return pairs;
}
