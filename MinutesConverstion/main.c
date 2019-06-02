#include <stdio.h>
#include <stdlib.h>

int main()
{
    long minutesEnterd = 0;

    double years = 0.0;
    double days = 0.0;
    double MinutesInYear = 0;

    printf("Please enter the number of minutes: ");

    //get input from user

    scanf("%d",&minutesEnterd);

    MinutesInYear = (60 * 24 * 365);

    years = (minutesEnterd / MinutesInYear);
    days = (minutesEnterd / 60.0) / 24.0;

    printf("%d minutes is approximately %f years and %f days \n",minutesEnterd,years,days);

   // printf("Hello world!\n");
    return 0;
}
