#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
// day5 program 1
int strlength(char str[])
{  int i=0;
   for(i=0;str[i++]!='\0';);
   return --i;
}

//day5 program 2
void dateFormat()
{ int d,m,y;
  char formmatted_date[30]="\0";
  char temp[30],month[10];
printf("Enter date,month and year (dd mm yyyy):");
scanf("%d %d %d",&d,&m,&y);
switch(m){
case 1: strcpy(month,"January");
        break;
case 2: strcpy(month,"February");
        break;
case 3: strcpy(month,"March");
        break;
case 4: strcpy(month,"April");
        break;
case 5: strcpy(month,"May");
        break;
case 6: strcpy(month,"June");
        break;
case 7: strcpy(month,"July");
        break;
case 8: strcpy(month,"August");
        break;
case 9: strcpy(month,"September");
        break;
case 10: strcpy(month,"October");
        break;
case 11: strcpy(month,"November");
        break;
case 12: strcpy(month,"December");
        break;
default :break;


}
sprintf(temp,"%dth ",d);
strcat(formmatted_date,temp);
strcat(formmatted_date,month);
sprintf(temp,",%d",y);
strcat(formmatted_date,temp);
printf("%s",formmatted_date);
}

//day 5 program 3

void convertL2U(){
char c[30];
printf("Enter the string to be processed:");
scanf("%[^\n]s",c);
int i=0;
while(c[++i]!='\0')
        c[i]=toupper(c[i]);

printf("processed string: %s",c);
}

//day 5 program 4
void stringRev(){
char c[30],temp;
printf("Enter the string to be processed:");
scanf("%[^\n]s",c);
int len=strlength(c);
for(int i=0;i<len/2;i++)
  { temp=c[i];
    c[i]=c[len-1-i];
    c[len-1-i]=temp;

  }
printf("Reversed String:%s",c);
}

// day 5 program 5
int** construct(int row,int col)
{   int **arr;
    arr=(int**)malloc(sizeof(int*)*row);
    for(int i=0;i<row;i++)
    { *(arr+i)=(int *)malloc(sizeof(int)*col);
       printf("Enter elements of row %d:",i+1);
       for(int j=0;j<col;j++)
            scanf("%d",(*(arr+i)+j));

    }
    return arr;
}
void display(int row,int col,int **arr)
{   printf("\nElements of the array:\n");
    for(int i=0;i<row;i++)
    {  for(int j=0;j<col;j++)
            printf("%d ",*(*(arr+i)+j));
       printf("\n");

    }
}

//day 5 program 6
int** add(int** arr1,int** arr2,int r,int c)
{ int **sum;
  sum=(int**)malloc(sizeof(int*)*r);
  for(int i=0;i<r;i++)
  { *(sum+i)=(int*)malloc(sizeof(int)*c);
      for(int j=0;j<c;j++)
         *(*(sum+i)+j)=*(*(arr1+i)+j)+*(*(arr2+i)+j);

  }
return sum;
}

//day 5 program 7
int checkMatrix(int **arr1,int **arr2,int r,int c){
for(int i=0;i<r;i++)
{ for(int j=0;j<c;j++)
  { if(*(*(arr1+i)+j)!=*(*(arr2+i)+j)) return 0;

  }
}
return 1;
}

//day 5 program 8
int sparse(int **arr,int r,int c){
int zeroes=0;
for(int i=0;i<r;i++)
{ for(int j=0;j<c;j++)
  { if(*(*(arr+i)+j)==0) zeroes++;
  }
}
if(zeroes>(r*c)/2) return 1;
else return 0;
//returns 1 if sparse matrix
}
