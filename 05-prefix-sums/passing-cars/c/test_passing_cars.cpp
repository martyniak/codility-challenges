#include <iostream>
#include "quick_test.h"
#include "gtest/gtest.h"
#include "passing_cars.h"

class FrogRiverOneTest : public QuickTest {};

TEST(FrogRiverOneTest, Test_1) {
  int A[] = {0, 1, 0, 1, 1};
  int N = 5;

  int result = solution(A, N);

  EXPECT_EQ(result, 5);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);

  int ret = RUN_ALL_TESTS();

  std::cout << "Press Enter to exit";
  std::cin.get();

  return ret;
}
