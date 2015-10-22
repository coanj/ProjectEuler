/*
	2520 is the smallest number that can be divided by each of the
	numbers from 1 to 10 without any remainder.

	What is the smallest positive number that is evenly divisible
	by all of the numbers from 1 to 20?
*/

#include <iostream>
using namespace std;
int main(){
	int dividend = 1;
	int divisor = 20;
	bool go = true;
	while(go){
		int count = 1;
		for(int z = 1; z <= divisor; z++){
			if(dividend%z == 0){
				if(count == divisor){
					cout << dividend << endl;
					go = false;
				}
				count++;
			}
		}
		dividend++;
	}
	return 0;
}