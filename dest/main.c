#include <stdio.h>
#include <stdlib.h>

int main()
{
    char src[50], dest[50];

    strcpy(src,"This is the source ");
    strcpy(dest,"This is the destination ");

    strncat(dest,src,15);

    printf("Final destination string : |%s| ",dest);


    return 0;
}
