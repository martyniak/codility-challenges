#include <iostream>
#include "quick_test.h"
#include "gtest/gtest.h"
#include "frog_jump.h"

class FrogJumpTest : public QuickTest {};

TEST(FrogJumpTest, Test_1) {
  int X = 10;
  int Y = 85;
  int D = 30;

  EXPECT_EQ(solution(X, Y, D), 3);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);

  int ret = RUN_ALL_TESTS();

  std::cout << "Press Enter to exit";
  std::cin.get();

  return ret;
}
