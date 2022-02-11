#include <iostream>
#include "quick_test.h"
#include "gtest/gtest.h"
#include "perm_check.h"

class PermCheckTest : public QuickTest {};

TEST(PermCheckTest, Test_1) {
  int A[] = {4, 1, 3, 2};
  int N = 4;

  int result = solution(A, N);

  EXPECT_EQ(result, 1);
}

TEST(PermCheckTest, Test_2) {
  int A[] = {4, 1, 3};
  int N = 2;

  int result = solution(A, N);

  EXPECT_EQ(result, 0);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);

  int ret = RUN_ALL_TESTS();

  std::cout << "Press Enter to exit";
  std::cin.get();

  return ret;
}
