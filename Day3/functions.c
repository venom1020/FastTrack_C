#include"day3.h"
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
//day 3 program 1
int bin2Decimal(int num)
{  int dec=0,i=0;
    while(num>0){
     dec+=(num%10)*(int)pow(2,i);
     num/=10;
     i++;
    }
return dec;
}
//day 3 program 2
void genSequence(int len)
{  int t1=0,t2=0,t3=1,n=0;
    printf("0 0 1");
   while(len-3>0){
    n=t1+t2+t3;
    printf(" %d",n);
    t1=t2;t2=t3;t3=n;
    len--;

   }

}
//day 3 program 3
void printSketch(int rows){
printf("\n");
for(int i=0;i<rows;i++)
 {  for(int j=0;j<i;j++)
     printf("  ");
    for(int j=i;j<rows;j++)
        printf("* ");
    printf("\n");
 }
}
//day 3 program 4
void two_digits_seven(void){
int i=16;
while(1)
{
  printf("%d,",i);
  if(i==70) break;
  i+=9;

}
}

//day 3 program 5
int powerOfNum(int num,int pow)
{ if(pow==1) return num;
  else
  return num*powerOfNum(num,pow-1);

}

//day 3 program 6
int fact(int n){
if(n==1) return 1;
else return n*fact(n-1);

}

//day 3 program 7
float evaluateFunc(float x,int n){
 float sum=0;
 int coef=1;
 while((n)!=0){
  sum+=x*(coef)/fact(coef);
  coef+=2;
  n--;

 }
 return sum;
}

//day 3 program 8
void menu(){
int choice,x;
float n;
printf("Choose a function to evaluate\n1.sqrt(x)\
       \n2.ln(x)\n3.log(x)\n4.x^n\n5.cos(x)\n:");
scanf("%d",&choice);
printf("Enter the value of x:");
scanf("%d",&x);
switch(choice){
case 1:
       printf("Square root of x= %f",sqrt(x));
       break;
case 2:
       printf("Natural log of x= %f",log(x));
       break;
case 3:
       printf("Log10 of x= %f",log10(x));
       break;
case 4:
       printf("Enter exponent value n: ");
       scanf("%f",&n);
       printf("\nx power n= %f",pow(x,n));
       break;
case 5:
       printf("Cosine of x= %f",cos(x));
       break;
}
}
