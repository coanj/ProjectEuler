/*
	If we list all the natural numbers below 10 that are multiples
	of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

	Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <iostream>

int main(){
	int num, sum = 0;
	for(int i = 0; i <= 1000; i++)
		sum += ( i%3==0 || i%5 == 0) ?i :0;
	std::cout << sum;
	return 0;
}


//  LOLCode version
/*
HAI 1.2
  I HAS A NUM ITZ 0
  I HAS A COUNT ITZ 0
  IM IN YR LOOP
    BOTH SAEM COUNT AN 1000
    O RLY?
      YA RLY
        GTFO
    OIC
    COUNT R SUM OF COUNT AN 1
    EITHER OF BOTH SAEM MOD OF COUNT AN 3 AN 0 AN BOTH SAEM MOD OF COUNT AN 5 AN 0
    O RLY?
      YA RLY
        NUM R SUM OF NUM AN COUNT
    OIC
  IM OUTTA YR LOOP
  VISIBLE NUM
KTHXBYE
*/