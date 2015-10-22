/*
	By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13,
	we can see that the 6th prime is 13.

	What is the 10001st prime number?
*/

#include <iostream>

using namespace std;

void primeloop(int max){
	int number = 2;
	int count = 1;
	int result = 0;
	while( count <= max ){
		bool check = true;
		while(true){
			if(number < 2){
				check = false;
				break;
			}
			if(number == 2){
				check = true;
				break;
			}
			if(number % 2 == 0){
				check = false;
				break;
			}
			for(int i=3; (i*i)<=number; i+=2){
				if(number % i == 0 ){
					check = false;
					break;
				}
			}
			break;
		}
		if(check){
			result = number;
			// cout << result << endl; // only if you want to see all primes
			count++;
		}
		number++;
	}
	cout << result;
}

int main(){
	primeloop(10001);
	return 0;
}