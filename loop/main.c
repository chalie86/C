#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long sum = 0LL;
    unsigned int count = 0;

    printf("\nEnter the number of integers you what to sum: ");
    scanf(" %u", &count);

    for(unsigned int i = 1; i <= count ; ++i)
    {
        printf("inside loop%\n");
        sum += i;
    }


    printf("\nTotal of the first %u numbers is %llu\n", count,sum);

    return 0;
}
