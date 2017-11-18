#include <cs50.h>
#include <stdio.h>

//int main(int argc, string argv[]) //YOU CAN USE STRING ARGV[] OR CHAR* ARGV[]
int main(int argc, char* argv[]) //ARGC=ARGUMENT COUNT I.E. # OF INPUTS BY USER
{
    int i;
    // PRINT CONTENTS OF ARGC C, %D=SUPPLYING THE STRING WITH AN INTEGER VALUE, THE INTEGER TO SUPPLY IS THE VARIABLE IN ARGC
    printf("argc = %d\n", argc); //PRINTS argc = 4 i.e., there are 4 counts in the argument
    printf("What's in argv[]\n"); // PRINTS "What's in argv[]"

    for (i = 0; i < argc; i++)
    {
        printf("argv[%d] = %s\n", i, argv[i]); //PRINTS THE LOOP SAYS, GO LOOK IN ARGUMENT VECTOR ARGV TO SEE WHAT USER HAS INPUT (SEE BELOW - THE LOOP)
    }

    return 0;
}

//THE LOOP
//THE LOOP SAYS, GO LOOK IN ARGUMENT VECOT ARGV TO SEE WHAT THE USER HAS INPUT
//THIS IS WHAT YOU THE USER HAS ACTUALLY TYPED IN: /argsII 4, 6, 8
//SO COMPUTER SHOWS THE FOLLOWING:
//THE FIRST THING USER HAS INPUT IS ./argsII (SO printf PRINTS AS argv[0] = ./argsII)
//THE SECOND THING USER HAS INPUT IS 4 (SO THIS PRINTS AS argv[1] = 4)
//argv[2] = 6
//argv[3] = 8