#ifndef MAX_COUNTERS_H
#define MAX_COUNTERS_H

struct Results {
  int * C;
  int L; // Length of the array
};

struct Results solution(int N, int A[], int M);

#endif
