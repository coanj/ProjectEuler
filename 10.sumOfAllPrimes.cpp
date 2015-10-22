/**
 * 	This will return the sum of all primes
 * 	up to 2000000.
 */
#include <iostream>
bool isPrime(int number){
    if(number < 2) return false;
    if(number == 2) return true;
    if(number % 2 == 0) return false;
    for(int i=3; (i*i)<=number; i+=2){
        if(number % i == 0 ) return false;
    }
    return true;
}
int main(){
	int input = 2000000;
	long long sum = 0;
	for(int i = 0; i <= input; i++){
		if(isPrime(i)){
			sum+=i;
		}
	}
	std::cout << sum;
	return 0;
}