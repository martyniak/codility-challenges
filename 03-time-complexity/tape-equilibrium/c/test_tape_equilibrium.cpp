#include <iostream>
#include "quick_test.h"
#include "gtest/gtest.h"
#include "tape_equilibrium.h"

class TapeEquilibriumTest : public QuickTest {};

TEST(TapeEquilibriumTest, Test_4) {
  int A[] = {3, 1, 2, 4, 3};
  int N = 5;

  EXPECT_EQ(solution(A, N), 1);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);

  int ret = RUN_ALL_TESTS();

  std::cout << "Press Enter to exit";
  std::cin.get();

  return ret;
}
