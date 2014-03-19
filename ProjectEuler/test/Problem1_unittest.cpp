
#include "../src/Problem1/Problem1.h"
#ifndef GTEST_H
#include "gtest/gtest.h"
#define GTEST_H
#endif

#include <vector>

TEST(Problem1Test, IsMultipleOf){
	Problem1 p;
	ASSERT_TRUE(p.isMultipleOf(10, 5));
	ASSERT_FALSE(p.isMultipleOf(10, 4));
	ASSERT_TRUE(p.isMultipleOf(15, 3));
}

TEST(Problem1Test, MultiplesSum){
	Problem1 p;
	std::vector<int> multiples;
	multiples.push_back(3);
	multiples.push_back(5);
	int upperBound = 1000;
	/*int multiplesOfRangeToUpperBound[] = {3, 5, 6, 9};
	std::vector<int> valuesShouldBe (multiplesOfRangeToUpperBound, multiplesOfRangeToUpperBound + sizeof(multiplesOfRangeToUpperBound) / sizeof(int));*/
	std::vector<int> valuesToAddTogether = p.getMultiplesUpTo(&multiples, upperBound);

	ASSERT_EQ(3, valuesToAddTogether.at(0));
	ASSERT_EQ(5, valuesToAddTogether.at(1));
	ASSERT_EQ(6, valuesToAddTogether.at(2));
	ASSERT_EQ(9, valuesToAddTogether.at(3));
	ASSERT_EQ(233168, p.sumOf(&valuesToAddTogether));
}
