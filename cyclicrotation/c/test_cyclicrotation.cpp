#include <iostream>
#include "quicktest.h"
#include "gtest/gtest.h"
#include "cyclicrotation.h"

class CyclicRotationTest : public QuickTest {};

TEST(CyclicRotationTest, Test_3) {
  int A[] = {3, 8, 9, 7, 6};
  int N = 5;
  int K = 3;

  struct Results result = solution(A, N, K);

  int expected[] = {9, 7, 6, 3, 8};

  int i;
  for(i = 0; i < N; i++)
    EXPECT_EQ(result.A[i], expected[i]);
}

TEST(CyclicRotationTest, Test_1) {
  int A[] = {0, 0, 0};
  int N = 3;
  int K = 1;

  struct Results result = solution(A, N, K);

  int expected[] = {0, 0, 0};

  int i;
  for(i = 0; i < N; i++)
    EXPECT_EQ(result.A[i], expected[i]);
}

TEST(CyclicRotationTest, Test_4) {
  int A[] = {1, 2, 3, 4};
  int N = 4;
  int K = 4;

  struct Results result = solution(A, N, K);

  int expected[] = {1, 2, 3, 4};

  int i;
  for(i = 0; i < N; i++)
    EXPECT_EQ(result.A[i], expected[i]);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);

  int ret = RUN_ALL_TESTS();

  std::cout << "Press Enter to exit";
  std::cin.get();

  return ret;
}
