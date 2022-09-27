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

//
