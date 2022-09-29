#include <stdio.h>
#include<assert.h>
#include "Day4.h"

int main()
{ int choice;
    printf("Choose program to test:");
    scanf("%d",&choice);

    int arr[5]={1,0,-1,8,2};

    int a=25,b=12;
    int *p,*q;

    int *m,*n;
    int max,min;

    int arr1[5]={1,2,3,4,5},arr2[3]={1,2,3};

    int arr3[5]={1,2,3,4,5};

    int arr4[10]={8,6,7,4,3,15,14,1,12,2};

    switch(choice){
    case 1: //test program 1

            sortArray(arr,5,'a');
            for(int i=0;i<5;i++)
            printf("%d ",arr[i]);
            break;

    case 2: //test program 2

            p=&a; q=&b;
            swap(p,q);
            printf("\na=%d,b=%d",a,b);
            break;

    case 3: //test program 3

            m=&max; n=&min;
            find_max_min(arr,5,m,n);
            printf("\nMax=%d min=%d",max,min);
            break;

    case 4: //test program 4

            set_union(arr1,5,arr2,3);
            set_intersection(arr1,5,arr2,3);
            set_difference(arr1,5,arr2,3);
            break;
    case 5: //test program 5
            removeDupl();
            break;
    case 6: //test program 6
            assert(search(arr3,5,1));
            break;
    case 7: //test program 7
            sortArray(arr4,10,'a');
            assert(binary_search(arr4,10,15));
            break;
    case 8: //test program 8
            program8();
            break;
    default : break;
    }
    return 0;
}
