#include <stdio.h>
#include <stdlib.h>
#define MONTHS 12

int main()
{
    int days [MONTHS] = {32,30,31,30,31,30,31,30,31,30,31,30};
    int index;


    for (index = 0;index < MONTHS; index++)
    printf("Month %d has %2d days.\n", index  +1, days[index]);
    return 0;
}
