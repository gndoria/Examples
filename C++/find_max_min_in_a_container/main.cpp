/**
@file main.cpp
@brief An example to demonstrate how to use algorithm to find the minimum and
maximum value in an stl container
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char **args){
	//Initialise the vector
	vector<int> numbers {4,153, 35, 325, 24, 49, 289, 269, 279, 87};
	//Use an algorithm to find the minimum
	const auto minimum = min_element(numbers.cbegin(), numbers.cend());
	//Find the maximum
	const auto maximum = max_element(numbers.cbegin(), numbers.cend());
	//Output the maximum and minimum
	cout << "The minimum value is " << *minimum << endl
		<< "The maximum value is " << *maximum << endl;
	return 0;
}
