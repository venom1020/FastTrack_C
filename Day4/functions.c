#include<stdio.h>
//day 4 program1
void sortArray(int arr[], int len,char mode)
{ int temp=0;
    for(int i=0;i<len;i++)
  {
      for(int j=1;j<len-i;j++)
    {
     if(mode!='d')
     { if(arr[j]<arr[j-1])
          { temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
          }
     }
     else{
        if(arr[j]>arr[j-1])
          { temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
          }
     }
  }
  }
}

//day 4 program2
void swap(int *a,int *b)
{ *a=*a*(*b);
   *b=*a/(*b);
   *a=*a/(*b);
}

//day 4 program3
int find_max_min(int array[], int size, int *max, int *min)
{ *max=array[1];
   *min=array[1];
   for(int i=0;i<size;i++)
   { if(array[i]<*min) *min=array[i];
     if(array[i]>*max) *max=array[i];

   }
   return 0;
}

//day 4 program4
int search(int arr[],int len,int element){
for(int i=0;i<len;i++)
{  if(arr[i]==element)
     { return 1;

     }

}
return 0;
}

void set_union(int arr1[],int len1,int arr2[],int len2)
{  int len3=len1+len2;
   int c[len3],k=0;
   for(int i=0;i<len1;i++)
   { if(!search(c,len3,arr1[i])) c[k++]=arr1[i];

   }
    for(int i=0;i<len2;i++)
   { if(!search(c,len3,arr2[i])) c[k++]=arr2[i];

   }
   printf("\n union of A and B : ");
   for(int i=0;i<k;i++) printf("%d ",c[i]);

}

void set_intersection(int arr1[],int len1,int arr2[],int len2)
{ int len3=(len2>len1)?len2:len1,k=0;
  int c[len3];
  if(len1>len2){
    for(int i=0; i<len3;i++)
   {  if(!search(c,len3,arr1[i])&&search(arr2,len2,arr1[i])) c[k++]=arr1[i];

   }

  }else
  {
      for(int i=0; i<len3;i++)
   {  if(!search(c,len3,arr2[i])&&search(arr1,len2,arr2[i])) c[k++]=arr2[i];

   }

  }
  printf("\nIntersection of A  and B : ");
  for(int i=0;i<k;i++) printf("%d ",c[i]);
}

void set_difference(int arr1[],int len1,int arr2[],int len2)
{ int len3=(len2>len1)?len2:len1,k=0;
  int c[len3];
    for(int i=0;i<len1;i++)
   { if(!search(c,len3,arr1[i])&&!search(arr2,len2,arr1[i])) c[k++]=arr1[i];

   }
   printf("\nDifference :");
   if(k==0) printf("null set");
   else
   {
      for(int i=0;i<k;i++) printf("%d ",c[i]);
   }
}



