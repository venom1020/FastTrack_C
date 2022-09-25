#include"day2.h"
#include<stdio.h>
#include<math.h>

//1
int sumOfNum(int num)
{   int sum=0;
    while(num!=0)
    { sum+=num%10;
        num/=10;

    }
    return sum;
}


//2
int reverseNum(int num)
{  int reverseNum=0;
    while(num!=0){
        reverseNum=reverseNum*10+num%10;
        num/=10;

    }
 return reverseNum;
}

//3
int Occurence(int num, int digit){
int occ=0;
while(num!=0){
if(digit==num%10) occ++;
num/=10;
}
return occ;
}


//4
char palindrome(int num){
 if(num==reverseNum(num)) return 'y';
 else
 return 'n';
}


//5
int checkPrime(int num){
int f=0;
if(num==2) return 1;
for(int i=2;i<=num/2;i++){
    if(num%i==0){
        f=1;
        break;
       }
}
if(f==1) return 0;
else
    return 1;
}

int printNprime(int count){
int pCount=0,i=2;
while(1){
if(checkPrime(i)){
    printf("%d\t",i);
    pCount++;
    }
i++;
if(pCount==count) break;
}
printf("\n");
return 1;
}

//6
int sumofSeries(int seriesLen){
int sum=0,n=0;
while(seriesLen!=0){
n=n*10+1;
sum+=n;
seriesLen--;
}
return sum;
}

//7
char armstrong(int num)
{ int temp=num,sum=0,rem=0;
  while(temp>0)
  { rem=temp%10;
    sum+= rem*rem*rem;
    temp/=10;
}
if(sum==num) return 'y';
else return 'n';
}

//8
int get_divisor_sum(int x){
int sum=0;
for(int i=1;i<=x/2;i++){
if(x%i==0) sum+=i;
}
return sum;
}
char amicable(int x, int y){
int sumX=0,sumY=0;
sumX=get_divisor_sum(x);
sumY=get_divisor_sum(y);
if(sumX==y && sumY==x) return 'y';
else return 'n';
}

//9
void menu(int a,int b)
{ int choice=0;
  printf("1.ADD\n2.SUBTRACT\n3.MULTIPLY\nEnter your choice:");
  scanf("%d",&choice);
  switch(choice){
  case 1: printf("\n SUM= %d",a+b);
          break;
  case 2: printf("\n DIFFERENCE= %d",a-b);
            break;
  case 3: printf("\n PRODUCT= %d",a*b);
            break;
  default: break;
  }

}

//10
float volOfCube(float edge){
return pow(edge,3);
}

float volOfCuboid(float l,float b,float h)
{
    return l*b*h;
}

float volOfSphere(float r){
return 4*PI*pow(r,3)/3;
}

float volOfCylinder(float r, float h){
return PI*r*r*h;
}

float volOfCone(float r,float h){
return PI*r*r*h/3;
}

//11
float elecBill(float units){
if(units>=300) return 350+(units-300)*2;
else if(units<300 && units>200) return 200+(units-200)*1.5;
else return units;
}


