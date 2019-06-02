#include <stdio.h>
#include <stdlib.h>

int main()
{
    int randomNumber = 0;
    int gues = 0;
    int maximumGues = 5;
    time_t t;

    srand((unsigned)time (&t));

    randomNumber = rand() % 21;

    printf("\nThis is a guesing game ");
    printf("\nI Have choosen a number between 0 and 20,which you must gues \n");

    for(;maximumGues > 0;--maximumGues)
    {
        printf("\n you have %\d tr%s left. ",maximumGues,maximumGues == 1 ? "y" : "ies");
        printf("\nEnter a gues:  ");
        scanf("%d",&gues);

        if(gues == randomNumber)
        {
            printf("\n Congragulation. you gues it!\n ");
            break;
        }
        else if(gues < 0 || gues > 20)
            printf("I said the number is between 0 and 20 \n");
        else if(randomNumber > gues)
            printf("Sorry ,%d is wrong, My Number is greater than that.\n ",gues);
        else if(randomNumber < gues)
            printf("Sorry ,%d is wrong, My Number is  less than that.\n ",gues);

    }
  printf("\nYou have had five  tries and failed. The number was %d\n  ",randomNumber);











    return 0;
}
