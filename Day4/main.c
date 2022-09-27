#include <stdio.h>
#include "Day4.h"

int main()
{
    //test program 1
    int arr[5]={1,0,-1,8,2};
    sortArray(arr,5,'a');
    for(int i=0;i<5;i++)
        printf("%d ",arr[i]);

    //test program 2
    int a=25,b=12;
    int *p,*q;
    p=&a; q=&b;
    swap(p,q);
    printf("\na=%d,b=%d",a,b);


    //test program 3
    int *m,*n;
    int max,min;
    m=&max; n=&min;
    find_max_min(arr,5,m,n);
    printf("\nMax=%d min=%d",max,min);

    //test program 4
    int arr1[5]={1,2,3,4,5},arr2[3]={1,2,3};
    set_union(arr1,5,arr2,3);
    set_intersection(arr1,5,arr2,3);
    set_difference(arr1,5,arr2,3);

    return 0;
}
