#include <iostream>
#include "quick_test.h"
#include "gtest/gtest.h"
#include "max_counters.h"

class MaxCountersTest : public QuickTest {};

TEST(MaxCountersTest, Test_5) {
  int N = 5;
  int A[] = {3, 4, 4, 6, 1, 4, 4};
  int M = 7;

  struct Results result = solution(N, A, M);

  int expected[] = {3, 2, 2, 4, 2};

  int i;
  for (i = 0; i < N; i++) {
    EXPECT_EQ(result.C[i], expected[i]);
  }
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);

  int ret = RUN_ALL_TESTS();

  std::cout << "Press Enter to exit";
  std::cin.get();

  return ret;
}
