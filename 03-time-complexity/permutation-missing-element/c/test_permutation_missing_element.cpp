#include <iostream>
#include "quick_test.h"
#include "gtest/gtest.h"
#include "permutation_missing_element.h"

class PermutationMissingElementTest : public QuickTest {};

TEST(PermutationMissingElementTest, Test_4) {
  int A[] = {2, 3, 1, 5};
  int N = 4;

  EXPECT_EQ(solution(A, N), 4);
}

TEST(PermutationMissingElementTest, Test_100500) {
  int A[100500] = {0};
  int N = 100500;

  for (int i = 0; i < N; i++) {
    A[i] = i+1;
  }
  A[0] = 100501;

  EXPECT_EQ(solution(A, N), 1);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);

  int ret = RUN_ALL_TESTS();

  std::cout << "Press Enter to exit";
  std::cin.get();

  return ret;
}
