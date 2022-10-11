#include <stdio.h>
#include <stdlib.h>
#include"day5.h"
#include<assert.h>

int main()
{
    //uncomment each  block for testing , comment after testing

    //test program 1
    assert(strlength("Himalayas")==9);
    assert(strlength("INDIA")==5);

    //test program 2
    //dateFormat();

    //test program 3
    //convertL2U();

    //test program 4
    //stringRev();

    //test program 5
//    int **arr;
//    arr=construct(5,5);
//    display(5,5,arr);

    //test program 6
//    int **arr1,**arr2,**arr3;
//    arr1=construct(3,3);
//    arr2=construct(3,3);
//    arr3=add(arr1,arr2,3,3);
//    display(3,3,arr3);

    //test program 7
//    int **arr1,**arr2;
//    arr1=construct(3,3);
//    arr2=construct(3,3);
//    assert(checkMatrix(arr1,arr2,3,3));

    //test program 8
    int **arr1;
    arr1=construct(3,3);
    assert(sparse(arr1,3,3));

    return 0;
}
