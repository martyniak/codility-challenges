#include <iostream>
#include "gtest/gtest.h"
#include "binarygap.h"

class QuickTest : public testing::Test {
 protected:
  void SetUp() override { start_time_ = time(nullptr); }

  void TearDown() override {
    const time_t end_time = time(nullptr);
    EXPECT_TRUE(end_time - start_time_ <= 5) << "The test took too long.";
  }

  time_t start_time_;
};

class BinaryGapTest : public QuickTest {};

TEST(BinaryGapTest, Test_9) {
  EXPECT_EQ(solution(9), 2);
}

TEST(BinaryGapTest, Test_15) {
  EXPECT_EQ(solution(15), 0);
}

TEST(BinaryGapTest, Test_20) {
  EXPECT_EQ(solution(20), 1);
}

TEST(BinaryGapTest, Test_32) {
  EXPECT_EQ(solution(32), 0);
}

TEST(BinaryGapTest, Test_529) {
  EXPECT_EQ(solution(529), 4);
}

TEST(BinaryGapTest, Test_561892) {
  EXPECT_EQ(solution(561892), 3);
}

TEST(BinaryGapTest, Test_74901729) {
  EXPECT_EQ(solution(74901729), 4);
}

TEST(BinaryGapTest, Test_1376796946) {
  EXPECT_EQ(solution(1376796946), 5);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);

  int ret = RUN_ALL_TESTS();

  std::cout << "Press Enter to exit";
  std::cin.get();

  return ret;
}