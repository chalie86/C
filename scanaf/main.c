#include <stdio.h>
//#include <stdlib.h>

int main()
{
    char str[100];
    int i;


    printf("Enter value : ");
    //scanf("%s %d",str,&i);

   // scanf("%d",&i,str);
    scanf("%d %s", &i, str);

    printf("\nYou enterd: %d:::::%s\n", i, str);

    //printf("\nYou enterd: %s %d ",str,i);
    return 0;
}
