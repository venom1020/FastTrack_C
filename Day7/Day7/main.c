#include <stdio.h>
#include<assert.h>
#include <stdlib.h>
#include"day7.h"
int main()
{   //Function stores N elements and returns pointer.
      int *arr,len;
      printf("Enter length:\n");
      scanf("%d",&len);
      arr=accept_Arr(len);

    //test program 1
    assert(linearSearch(arr,len,2)==1);

    //test program 2
    int max,min;
    int *maxp,*minp;
    maxp=&max;
    minp=&min;
    maxMin(arr,len,maxp,minp);
    printf("Max: %d Min: %d",max,min);

    //test program 3
    printf("\nSum=%d",sumOfelements(arr,len));

    //test program 4
    int *sumEp,*sumOp;
    int sumE=0,sumO=0;
    sumEp=&sumE;
    sumOp=&sumO;
    sumofevenOdd(arr,len,sumEp,sumOp);
    printf("\nOdd Sum=%d Even sum:%d",sumO,sumE);

    //test program 5
    assert(isPalindrome(arr,len)=='y');


    //test proram 6
    freeMemory(arr);
    return 0;
}
