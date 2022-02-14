#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "frog_river_one.h"

int solution(int X, int A[], int N)
{
    int K;
    int road[X+1];
    int leaves_left = X;

    memset(road, -1, sizeof road);

    for (K = 0; K < N; K++) {
        if (road[A[K]] != 0) {
            road[A[K]] = 0;
            leaves_left--;
        }

        if (leaves_left == 0) {
            return K;
        }
    }

    return -1;
}
