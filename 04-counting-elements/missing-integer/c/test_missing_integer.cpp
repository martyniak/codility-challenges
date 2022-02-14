#include <iostream>
#include "quick_test.h"
#include "gtest/gtest.h"
#include "missing_integer.h"

class MissingIntegerTest : public QuickTest {};

TEST(MissingIntegerTest, Test_1) {
  int A[] = {1, 3, 6, 4, 1, 2};
  int N = 6;

  int result = solution(A, N);

  EXPECT_EQ(result, 5);
}

TEST(MissingIntegerTest, Test_2) {
  int A[] = {1, 2, 3};
  int N = 3;

  int result = solution(A, N);

  EXPECT_EQ(result, 4);
}

TEST(MissingIntegerTest, Test_3) {
  int A[] = {-1, -3};
  int N = 2;

  int result = solution(A, N);

  EXPECT_EQ(result, 1);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);

  int ret = RUN_ALL_TESTS();

  std::cout << "Press Enter to exit";
  std::cin.get();

  return ret;
}
