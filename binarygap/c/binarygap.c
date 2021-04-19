#include <stdio.h>
#include "binarygap.h"

int solution(int N)
{
    int startgap = 0;
    int max = 0, gap = 0, modN;

    while (N != 0)
    {
        modN = N % 2;
        if (modN == 1) {
            if (gap > max)
                max = gap;
            startgap = 1;
            gap = 0;
        } else {
            if (startgap == 1) {
                gap += 1;
            }
        }
        N = (int) (N / 2);
        // printf("N: %d modN: %d\n", N, modN);
    }

    return max;
}
