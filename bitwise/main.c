#include <stdio.h>
#include <stdlib.h>

int main()
{

    unsigned int a = 60; //0011 1100
    unsigned int b = 13; //0000 1101
    int result = 0;
   // result = a & b;

     //result = a | b;

    // result = a  ^ b;

    //result = a  << b;

    //result = a  << 2;

    result = a  >> 3;

    printf("result is %d", result);
    return 0;
}
