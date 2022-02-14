#include <iostream>
#include "quick_test.h"
#include "gtest/gtest.h"
#include "frog_river_one.h"

class FrogRiverOneTest : public QuickTest {};

TEST(FrogRiverOneTest, Test_1) {
  int X = 5;
  int A[] = {1, 3, 1, 4, 2, 3, 5, 4};
  int N = 8;

  int result = solution(X, A, N);

  EXPECT_EQ(result, 6);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);

  int ret = RUN_ALL_TESTS();

  std::cout << "Press Enter to exit";
  std::cin.get();

  return ret;
}
