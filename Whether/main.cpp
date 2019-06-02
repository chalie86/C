#include <iostream>

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MONTHS 12

#define YEARS 5





int main()

{

   float rain[YEARS][MONTHS] =

   {

       {1.2,1.3,1.5,4.8,8.0,9.2,6.4,5.0,1.2,3.0,1.0,1.0},
       {3.2,1.3,1.5,4.8,2.1,9.0,6.4,2.0,1.2,3.0,1.0,1.0},
       {9.6,1.3,1.5,3.2,3.2,9.0,6.4,5.0,1.2,3.0,1.0,1.0},
       {1.0,1.0,1.2,1.2,8.0,9.0,6.4,5.0,2.0,3.0,1.0,1.0},
       {4.1,1.3,1.5,4.8,2.0,9.0,6.4,5.0,3.1,3.0,1.0,1.0}
   };



   int months, years;

   float subtot ,total;



   printf("YEAR\t\tRAINFALL  (inches)\n");
   for(years = 0 ,total = 0;years < YEARS; years++ )
   {
       for(months = 0, subtot = 0;months < MONTHS; months++)
       {
         subtot += rain[years][months];
       }
       printf("%5d \t%15.1f\n", 2010 + years ,subtot);

   total += subtot;
   }

   printf("\The yearly average is %.1f inches.\n\n",total/YEARS);

   printf("MONTHLY AVERAGES:\n\n");
   printf(" Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n");

   for(months = 0;months < MONTHS; months++ )
   {
       for (years = 0, subtot = 0; years < YEARS; years++)
            subtot += rain[years][months];

       printf("%4.1f", subtot/YEARS);

   }

   printf("\n");
    return 0;

}
