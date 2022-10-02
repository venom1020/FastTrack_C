#include"day7.h"
#include<stdlib.h>
#include<stdio.h>

//Store array
int* accept_Arr(int N){
int *arr;
printf("\nEnter %d no's:",N);
arr=(int *)malloc(sizeof(int)*N);
for(int i=0;i<N;i++)
    scanf("%d",(arr+i));
return arr;
}

//day 7 program 1

int linearSearch(int* arr,int len,int key){
for(int i=0;i<len;i++) if(*(arr+i)==key) return 1;
return 0;
}

//day 7 program 2
void maxMin(int* arr,int len,int *maxp,int *minp){
*maxp=*arr;
*minp=*arr;
for(int i=0;i<len;i++)
{ if(*(arr+i)>(*maxp)) *maxp=*(arr+i);
   if(*(arr+i)<(*minp)) *minp=*(arr+i);
}
}

//day 7 program 3
int sumOfelements(int* arr,int len)
{ int sum=0;
  for(int i=0;i<len;i++) sum+=*(arr+i);
  return sum;
}

//day 7 program 4
void sumofevenOdd(int *arr,int len,int *sumE,int *sumO){
for(int i=0;i<len;i++)
{if(*(arr+i)%2==0) *sumE+=*(arr+i);
 else *sumO+=*(arr+i);
}
}

//day 7 program 5

char isPalindrome(int *arr,int len)
{ for(int i=0;i<len/2;i++) {
    if(*(arr+i)!=*(arr+len-1-i)) return 'n';
}
return 'y';
}

//day 7 program 6
void freeMemory(int *arr){
free(arr);
}
