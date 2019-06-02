#include <stdio.h>
#include <stdlib.h>

int main()
{
    double width = 32.5;
    double height = 12.5;
    double premitive = 0.0;
    double area = 0.0;


    premitive  = 2.0 * (height + width );
    area = width * height;

    printf("Perimative is: %f\n", premitive );
    printf("Area is : %f\n",area);

    return 0;
}
