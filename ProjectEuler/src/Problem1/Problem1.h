/*
 * Problem1.h
 *
 *  Created on: Mar 18, 2014
 *      Author: Chris
 */

#include <vector>

#ifndef PROBLEM1_H_
#define PROBLEM1_H_


class Problem1{

public:
	bool isMultipleOf(int numerToTest, int multiple);
	int sumOf(std::vector<int> *addTogether);
	std::vector<int> getMultiplesUpTo(std::vector<int>* multiplesOf, int upperBound);

private:
	int sumOfMultiples;

};

#endif /* PROBLEM1_H_ */
