#include"day1.h"
#include<string.h>
#include<math.h>
#define Pi 3.1415

//Logic Program 1
char up2low(char a){
if(a<65 || a>90) return '*';
else
    return a+32;
}

//Logic Program 2
float areaCircle(float r){
return Pi*pow(r,2);
}

//Logic Program 3
float simpleI(float principal,float rate,float time)
{
return (principal*time*rate)/100;
}

float compoundI(float principal,float rate,float time)
{
return principal*pow((1+rate/100),time)-principal;
}

//Logic Program 4
float cel2Fah(float temp)
{
    return 32+1.8*temp;
}

float fah2Cel(float temp)
{
 return (temp-32)/1.8;
}

//Logic Program 5
char eveOdd(int num)
{
    if(num%2==0)
        return 'y';
    else
        return 'n';
}

// Logic Program 6
char leapYear(int year)
{  if(year%100==0)
   { if(year%400==0)
      return 'y';
      else
      return 'n';
   }
   else if(year%4==0)
        return 'y';
   else
        return 'n';
}

//logic program 7
int powerOf2(int num){
return 2<<(num-1);
}


