/*
The following iterative sequence is defined for the set of positive integers:

n → n/2 (n is even)
n → 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:

13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1

It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms.
Although it has not been proved yet (Collatz Problem),
it is thought that all starting numbers finish at 1.
Which starting number, under one million, produces the longest chain?
*/

#include <iostream>

using namespace std;

int main(){
	int num = 999999;
	int chain = 0;
	int biggest = 0;
	while(num>1){
		long long tmp = num;
		int count = 2;
		while(tmp != 1){
			if(tmp%2 == 0)
				tmp /= 2;
			else
				tmp = 3*tmp+1;
			if(chain<count){
				chain = count;
				biggest = num;
			}
			count++;
		}
		num--;
	}
	cout << "The largest chain from: " << biggest << " with " << chain << " terms.";
	return 0;
}