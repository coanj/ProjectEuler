/*
	The sum of the squares of the first ten natural numbers is,
	1^2 + 2^2 + ... + 10^2 = 385

	The square of the sum of the first ten natural numbers is,
	(1 + 2 + ... + 10)^2 = 55^2 = 3025

	Hence the difference between the sum of the squares of the
	first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

	Find the difference between the sum of the squares of the
	first one hundred natural numbers and the square of the sum.
*/

#include <iostream>

int main(){
	int sum1 = 0;
	int sum2 = 0;
	int num = 100;
	sum1 = (num*(num+1)*(2*num+1))/6;
	sum2 = ((num * (num+1))/2)*((num * (num+1))/2);
	std::cout << sum2-sum1;
	return 0;
}