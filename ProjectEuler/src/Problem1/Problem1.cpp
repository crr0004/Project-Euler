/*
 * Problem1.cpp
 *
 *  Created on: Mar 18, 2014
 *      Author: Chris
 */

#include <iostream>
#include <numeric>
#include "Problem1.h"

using namespace std;

#ifndef UNIT_TEST
int main(){
	cout << "Running Problem 1" << endl;
	Problem1 p;
	std::vector<int> multiples;
	multiples.push_back(3);
	multiples.push_back(5);
	std::vector<int> valuesToAddTogether = p.getMultiplesUpTo(&multiples, 1000);
	int result = p.sumOf(&valuesToAddTogether);
	cout << "Problem 1 result: " << result << endl;
	return result;
}
#endif


bool Problem1::isMultipleOf(int numberToTest, int multiple){

	if(numberToTest % multiple == 0){
		return true;
	}
	return false;
}

int Problem1::sumOf(std::vector<int> *addTogether){
	int sum = 0;

	/*for(std::vector<int>::size_type i = 0; i < addTogether->size(); i++){
		sum += i;
	}*/
	sum = std::accumulate(addTogether->begin(), addTogether->end(), 0);

	return sum;
}

std::vector<int> Problem1::getMultiplesUpTo(std::vector<int>* multiplesOf, int upperBound){
	std::vector<int> valuesThatAreMultiples ;

	for(int i = 1; i < upperBound; i++){
			for(std::vector<int>::size_type j = 0; j < multiplesOf->size(); j++){
				if(i % multiplesOf->at(j) == 0){
					valuesThatAreMultiples.push_back(i);
				}
			}
		}

	return valuesThatAreMultiples;
}

