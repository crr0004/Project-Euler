
#ifndef GTEST_H
#include "gtest/gtest.h"
#define GTEST_H
#endif

#ifdef UNIT_TEST
GTEST_API_ int main(int argc, char **argv) {
  printf("Running main() from main_test.cpp\n");
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

#endif
