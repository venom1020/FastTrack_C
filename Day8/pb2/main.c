#include"pb2.h"
#include<stdio.h>
int main()
{   int numN;
    printf("\nEnter number of nodes:");
    scanf("%d",&numN);
    nodes arr[numN];
    acceptXY(arr,numN);
    findMaxNode(arr,numN);

    makeConnections(arr,numN);

   int vlines=0,hlines=0;
    int *vp=&vlines,*hp=&hlines;
   countVandHlines(arr,numN,vp,hp);
    for(int i=0;i<numN;i++)
       printf("\n (%d,%d) (%d,%d)\n",arr[i].x,arr[i].y,arr[arr[i].edge-1].x,arr[arr[i].edge-1].y);

    printf("\nHorizontal lines:%d\nVertical lines:%d",hlines,vlines);
    return 0;
}
