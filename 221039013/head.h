#include<stdio.h>
#include<stdlib.h>


//structure to store details of text file in record format
typedef struct movie{
char name[20];
int year,duration,votes;
float rating;	
}mvdata;

//function signatures
int readFile(mvdata*,FILE*);
void display(mvdata*);
void countFilms(mvdata*,int);
void printTop5(mvdata*,int);
void printMaxMin(mvdata*,int);
void storePopular(mvdata*, int);
