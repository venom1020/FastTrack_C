#include"day8.h"
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
int main()
{   stud *ptr=NULL;
    int n;
    printf("Enter number of students:");
    scanf("%d",&n);
    //allocate memory for N students
    ptr=allocateMem(n);
    //input student data
    accept(n,ptr);
    int ch=0,flag=0;
    while(flag==0)
    { system("cls");
      printf("1.Search by roll no:\n2.Search by name:\n3.Student with highest marks\
             \n4.Display student details with name beginning with A\
             \n5.Exit:");
      scanf("%d",&ch);
      switch(ch){
      case 1: system("cls");
              //search by roll no
              searchByroll(n,ptr);
              getch();
              break;
      case 2: system("cls");
              //search by name
              searchByname(n,ptr);
              getch();
              break;
      case 3: system("cls");
              //student with highest marks
              highestMarks(n,ptr);
              getch();
              break;
      case 4: system("cls");
              //student with names starting with A
              displayNameswithA(n,ptr);
              getch();
              break;
      default : flag=1;
                break;

      }


    }

    free(ptr);
    return 0;
}
