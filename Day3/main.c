#include <stdio.h>
#include <stdlib.h>
#include"day3.h"
#include<assert.h>
int main()
{   //day3 p1 test
    assert(bin2Decimal(1111)==15);
    assert(bin2Decimal(10000)==16);
    //day3 p2 test
    genSequence(8);
    //day3 p3 test
    printSketch(4);
    //day3 p4 test
    two_digits_seven();
    //day 3 p5 test
    assert(powerOfNum(3,4)==81);
    assert(powerOfNum(2,10)==1024);
    //day 3 p6 test
    assert(fact(4)==24);
    assert(fact(5)==120);
    //day 3 p7 test
    printf("\n%f",evaluateFunc(1,4));
    printf("\n%f",evaluateFunc(2,4));

    //day 3 p8 test
    assert(cat(2,3)==23);
    assert(cat(3,8)==38);

    //day3 p9 test
    assert(sqr(2)==4);
    assert(sqr(8)==64);

    //day3 p10 test
    //menu();
    return 0;
}
