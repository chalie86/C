#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[] )
{
    int numberOfaugurments =  argc;
    char *argument1 = argv[0];
    char *argurment2 = argv[1];

    printf("Number of arguments: %d\n",numberOfaugurments );
    printf("Argument 1 is the program name: %s\n",argument1);
    printf("Argument 2 is the command line argument: %s\n ",argurment2 );

    //printf("Hello world!\n");
    return 0;
}
