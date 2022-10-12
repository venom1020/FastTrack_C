#include"head.h"

//function reads text file to structure and returns number of records read;
int readFile(mvdata *m,FILE *a){
int i=0;
char c;
while(c=fgetc(a)!='\n');
for(i=0;!feof(a);i++)
{ fscanf(a,"%s ",(m+i)->name);
  fscanf(a,"%d",&(m+i)->year);
  fscanf(a,"%d",&(m+i)->duration);
  fscanf(a,"%f",&(m+i)->rating);
  fscanf(a,"%d",&(m+i)->votes);

}
return i-1;
}

//function to print a record
void display(mvdata *m)
{  printf("\nName:%s\nYear:%d\nDuration:%d\nRating:%f\nVotes:%d\n",m->name,m->year,m->duration,m->rating,m->votes);
}

//function to count number of films released each year
void countFilms(mvdata *m,int records){
int year=0,count[]={0,0,0,0,0,0};
for(int i=0;i<records;i++)
{  year=(m+i)->year;
   switch(year)
   {case 2016: count[0]++;
   				break;
   	case 2017: count[1]++;
   				break;
   	case 2018: count[2]++;
   				break;
   	case 2019: count[3]++;
   				break;
    case 2020: count[4]++;
   				break;
   	case 2021: count[5]++;
   				break;
   	default: break;				
   	}  
}
printf("\nMovie count per year:\n");
printf("\n2016:%d\n2017:%d\n2018:%d\n2019:%d\n2020:%d\n2021:%d\n",count[0],count[1],count[2],count[3],count[4],count[5]);

}


//function to print top 5 movie details
void printTop5(mvdata *m,int records)
{  mvdata temp;
	for(int i=1;i<records;i++)
	{ for(int j=i;j<records;j++)
		{ if((m+j-1)->rating > (m+j)->rating)
			{ temp=*(m+j-1);
			  *(m+j-1)=*(m+j);
			  *(m+j)=temp;

			}  

		}

	}
printf("\nTop 5 movies are:\n");
   for(int i=records-5;i<records;i++)
   { display((m+i));

   }	

}

//function to print details of movie with max and min duration

void printMaxMin(mvdata *m,int records){
int max,min,dur,maxP=0,minP=0;
max=m->duration;
min=m->duration;
for(int i=0;i<records;i++)
{  dur=(m+i)->duration;
	if(dur>max)
	{ max=dur;
	  maxP=i;

	}
	if(dur<min)
	{ min=dur;
	  minP=i;
	}

}
printf("\n\nDetails of movies with max and min Duration respectively:\n");
display(m+maxP);
display(m+minP);
}

//function to store movie details with >10,000 votes
void storePopular(mvdata *m, int records)
{ FILE *b;
  int votes;
  b=fopen("popular_movie.txt","w");
  for(int i=0;i<records;i++)
	{   votes=(m+i)->votes;
	  	if(votes>10000) fprintf(b,"%s %d %d %f %d\n",(m+i)->name,(m+i)->year,(m+i)->duration,(m+i)->rating,(m+i)->votes);
	}
  fclose(b);
}

