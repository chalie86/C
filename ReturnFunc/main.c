#include <stdio.h>
#include <stdlib.h>



int MultiplNumbers(int x,int y)
{

    int result = x * y;
    return result;
}

int main()
{
   int result = 0;
   result = MultiplNumbers(10,29);

    printf("result is %d\n",result);
    return 0;
}
