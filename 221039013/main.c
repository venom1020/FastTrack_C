#include"head.h"

int main()
{	FILE *a;
	
	//make array of structure to store data from file and allocate memory for 100 records
	mvdata *mv;
	mv=(mvdata*)malloc(sizeof(mvdata)*100);
	
	//read the movie.txt file and store in structure
	a=fopen("movie.txt","r");
	//move file pointer down by one line
	int records_read=readFile(mv,a);
	fclose(a);
 
 	//file closed all details of file saved in structure

	//count films per year and print it 
	countFilms(mv, records_read);

	//Print Details of top 5 movies 
	printTop5(mv,records_read);

	//print details of movies with max and min duration
	printMaxMin(mv,records_read);

	//save details of movies having >10,000 votes to a file
	storePopular(mv,records_read);
	return 0;
}