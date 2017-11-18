#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
//int main(int argc, char* argv[]) //ARGC=ARGUMENT COUNT I.E. # OF INPUTS BY USER
{
    int i;
    // PRINT CONTENTS OF ARGC C, %D=SUPPLYING THE STRING WITH AN INTEGER VALUE, THE INTEGER TO SUPPLY IS THE VARIABLE IN ARGC
    printf("argc = %d\n", argc);
    printf("What's in argv[]\n");

    for (i = 0; i < argc; i++)
    {
        printf("argv[%d] = %s\n", i, argv[i]);
    }

    return 0;
}
//FIRST ITERATION. SEE ARGSII AFTER THIS
//THIS PRINTS THE FOLLOWING:
//argc = 1
//What's in argv[]
//argv[0] = ./args