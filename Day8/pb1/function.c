#include"day8.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//allocate memory for n students
stud* allocateMem(int N){
stud *ptr;
ptr=(stud*)malloc(sizeof(stud)*N);
return ptr;
}

// display one specific student record
void display(stud *ptr)
{ printf("\n\nRoll No: %d",ptr->rollNo);
  printf("\nName: %s",ptr->name);
  printf("\nAge: %d",ptr->age);
  printf("\nMarks: ");
  for(int i=0;i<5;i++)
        printf("%d ",ptr->marks[i]);
}

//Accept student data
void accept(int n,stud *ptr){
for(int i=0;i<n;i++)
  { printf("\nEnter details of student %d",i+1);
    printf("\nEnter Roll No: ");
    scanf("%d",&(ptr+i)->rollNo);
    printf("Enter Name: ");
    scanf("%s",(ptr+i)->name);
    printf("Enter Age: ");
    scanf("%d",&(ptr+i)->age);
    printf("Enter Marks in 5 subjects: ");
    for(int j=0;j<5;j++)
        scanf("%d",&(ptr+i)->marks[j]);

  }
}

//search by roll no
void searchByroll(int n,stud *ptr)
{  int num;
    printf("\nEnter roll no to search:");
    scanf("%d",&num);
    for(int i=0;i<n;i++)
    { if((ptr+i)->rollNo == num)
        { printf("\nSearch by roll no found details:\n");
          display(ptr+i);
          return;
        }

    }
  printf("\nStudent with roll no %d not found ",num);
}

//search by name
void searchByname(int n,stud* ptr){
char name[20];
    printf("\nEnter name to search:");
    scanf("%s",name);
    for(int i=0;i<n;i++)
    { if(strcmp((ptr+i)->name,name)==0)
        { printf("\nSearch by name found details:\n");
          display(ptr+i);
          return;
        }

    }
  printf("\nStudent with name %s not found ",name);
}

// highest marks
void highestMarks(int n,stud *ptr){
int totalmarks,max=0,maxP=0;
for(int i=0;i<n;i++)
 { totalmarks=0;
     for(int j=0;j<5;j++) totalmarks+=(ptr+i)->marks[j];
     if(totalmarks>max){
        max=totalmarks;
        maxP=i;
     }
 }
printf("Student with highest marks:\n");
display(ptr+maxP);
}

//names with starting letter A
void displayNameswithA(int n,stud* ptr){
printf("Student details with initials A:");
for(int i=0;i<n;i++)
   if((ptr+i)->name[0]=='A' || (ptr+i)->name[0]=='a') display(ptr+i);


}
