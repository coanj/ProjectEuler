/*
	A palindromic number reads the same both ways.
	The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
	Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	int palin;
	int biggest = 0, test = 0;
	for(int x = 999; x > 99; x--){
		for(int y = 999; y > 99; y--){
			palin = x * y;
			string drome = to_string(palin);
			int size = drome.length();
			string prt1 = drome.substr(0,size/2);
			string prt2 = drome.substr(size/2,size);
			reverse(prt2.begin(),prt2.end());
			if(prt1==prt2){
				biggest = (biggest < palin) ?palin :biggest;
				if(test != biggest){
					test = biggest;
				}
			}
		}
	}
	cout << biggest << endl;
	return 0;
}