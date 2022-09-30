#include<string.h>
#include<stdio.h>
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

