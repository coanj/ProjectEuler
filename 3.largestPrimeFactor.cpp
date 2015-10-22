/*
	The prime factors of 13195 are 5, 7, 13 and 29.
	What is the largest prime factor of the number 600851475143 ?
*/

#include <iostream>

int main(){
	long long num = 600851475143;
	for(int i = 1; i < num; i++)
		num = (num%i == 0) ?(num/i) :num;
	std::cout << num;
	return 0;
}