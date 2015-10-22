/*
	A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
	a^2 + b^2 = c^2

	For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

	There exists exactly one Pythagorean triplet for which a + b + c = 1000.
	Find the product abc.
*/
#include <iostream>
#define MAX 1000
int main(){
	int a, b, c;
	for(a=1; a<MAX; a++){
		for(b=a; b<MAX; b++){
			for(c=b; c<MAX; c++){
				if((a*a)+(b*b) == (c*c)){
					if(a+b+c==MAX){
						std::cout << "Result: " << a << " * " << b << " * " << c << " = " << (a*b*c) << std::endl;
					}
				}
			}
		}
	}
	return 0;
}