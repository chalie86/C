#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum = 0;
    int j = 0;
    int count = 5;
    enum Day{Monday,Tuesday,Wensday,Thursday,Friday,Saturday,Sunday};
    for(int i = 1; i <= count; ++i)
    {
        sum = 1;
        j = 1;

        printf("\n1");

        //calculate sum of interger fom 1 to i;
        while(j < i)
        {
            sum += ++j;
            printf(" +%d",j);

        }
        printf("=%d",sum);
    }

//==================================
for(enum Day day = Monday; day <= Sunday; ++day)
{
    if(day == Wensday )
        continue;

    printf("its not Wensday\n ");
}




    //printf("Hello world!\n");
    return 0;
}
