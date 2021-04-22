#include <iostream>
#include "quick_test.h"
#include "gtest/gtest.h"
#include "odd_occurrences_in_array.h"

class OddOccurrencesInArrayTest : public QuickTest {};

TEST(OddOccurrencesInArrayTest, Test_1) {
  int A[] = {9};
  int N = 1;

  EXPECT_EQ(solution(A, N), 9);
}

TEST(OddOccurrencesInArrayTest, Test_7) {
  int A[] = {9, 3, 9, 3, 9, 7, 9};
  int N = 7;

  EXPECT_EQ(solution(A, N), 7);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);

  int ret = RUN_ALL_TESTS();

  std::cout << "Press Enter to exit";
  std::cin.get();

  return ret;
}
