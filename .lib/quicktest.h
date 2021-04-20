#ifndef QUICKTEST_H
#define QUICKTEST_H

#include <iostream>
#include "gtest/gtest.h"

class QuickTest : public testing::Test {
 protected:
  void SetUp() override { start_time_ = time(nullptr); }

  void TearDown() override {
    const time_t end_time = time(nullptr);
    EXPECT_TRUE(end_time - start_time_ <= 5) << "The test took too long.";
  }

  time_t start_time_;
};

#endif
