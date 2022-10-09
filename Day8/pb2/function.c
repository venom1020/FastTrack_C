#include"pb2.h"
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int check(nodes arr[],int n,int x,int y)
{ for(int i=0;i<n;i++)
     if(arr[i].x==x && arr[i].y==y) return 1;
return 0;
}

 void acceptXY(nodes arr[],int n){
 int x,y;
 for(int i=0;i<n;i++)
  { again:
    printf("\nEnter co-ordinates for node %d:",i+1);
    scanf("%d %d",&x,&y);
    if(check(arr,n,x,y))
        {
            printf("\n%d %d co-ordinates are occupied enter again... ",x,y);
            goto again;
        }
    arr[i].x=x;
    arr[i].y=y;
    arr[i].label=i+1;
    printf("Enter weight for node:");
    scanf("%d",&arr[i].weight);
  }
 }

void findMaxNode(nodes arr[],int n)
{ int max=0,maxP;
    for(int i=0;i<n;i++)
       { if(arr[i].weight>max){
          max=arr[i].weight;
          maxP=i;
          }
       }
  printf("Node with max weight=%d is present at (%d,%d)",max,arr[maxP].x,arr[maxP].y);

}


int randomLabel(int n){
	srand(time(0));
	int roll=1;
	do{
		roll=rand()/100;
	}while(!(roll>0 && roll<=n));
	return roll;
}

void makeConnections(nodes arr[],int n){
int temp;
for(int i=0;i<n;i++)
     { while(1)
        {
            temp=randomLabel(n);
            if(temp!=arr[i].label)
              {arr[i].edge=temp;
               break;
              }
        }

    }
}

void countVandHlines(nodes arr[],int n,int *v,int *h){
int xE,yE;
for(int i=0;i<n;i++){
xE=arr[arr[i].edge-1].x;
yE=arr[arr[i].edge-1].y;
if(arr[i].x==xE) *v+=1;
if(arr[i].y==yE) *h+=1;
}
}
