#include <stdio.h>
#include <stdlib.h>

void MultiplNumbers(int x,int y)
{

    int result = x * y;
    printf("The product of %d multiplied by %d is: %d\n",x,y,result);
}






int main()
{
    MultiplNumbers(10,20);
    MultiplNumbers(20,30);
    MultiplNumbers(50,2);
    return 0;
}
