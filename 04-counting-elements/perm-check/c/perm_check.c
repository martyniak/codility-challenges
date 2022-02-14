#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "perm_check.h"

int solution(int A[], int N)
{
    int i, exp_sum;
    int l_sum = 0;

    int temp[N];
    memset(temp, -1, sizeof temp);

    for(i = 0; i < N; i++){
        if (A[i] > N)
            return 0;

        if (temp[A[i]-1] == -1) {
            l_sum += A[i];
            temp[A[i]-1] = 0;
        }
    }

    exp_sum = N * (N + 1) / 2;

    if (l_sum == exp_sum)
        return 1;
    else
        return 0;
}
