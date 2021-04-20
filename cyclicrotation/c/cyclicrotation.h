#ifndef CYCLICROTATION_H
#define CYCLICROTATION_H

struct Results {
    int * A;
    int N; // Length of the array
};

struct Results solution(int A[], int N, int K);

#endif
