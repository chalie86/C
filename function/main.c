#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,sign;

    printf("Please type in number: ");
    scanf("%i",&number);

    if(number < 0)
        sign = -1;
    else if(number == 0)
        sign = 0;
    else
        sign = 1;

    printf("Sign = %i\n",sign);
    return 0;
}
