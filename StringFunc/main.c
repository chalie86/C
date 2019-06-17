#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[] = "My name is tshifhiwa";
    char temp[50];

    strncpy(temp,s,sizeof(temp) - 1);

   // printf("the legth is: %d", strlen(s));
     printf("the legth is: %s", s);
    return 0;
}
