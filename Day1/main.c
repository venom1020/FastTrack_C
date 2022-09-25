#include<assert.h>
#include"day1.h"
#include<stdio.h>


int main(){
//test 1st program
assert(up2low('A')=='a');
assert(up2low('Z')=='z');

//test 2nd program
assert(3.1415f==areaCircle(1));
assert(12.566f==areaCircle(2));

//test 3rd program
assert(100.0f==simpleI(2000,5,1));
assert(315.25f==compoundI(2000,5,3));

//test 4th program
assert(302.0f==cel2Fah(150));
assert(100==fah2Cel(212));

//test 5th program
assert('y'==eveOdd(18));
assert('n'==eveOdd(7));

//test 6th program
assert('y'==leapYear(2000));
assert('n'==leapYear(1800));
assert('y'==leapYear(1984));

//test 7th program
assert(1024==powerOf2(10));
assert(256==powerOf2(8));

return 0;
}
