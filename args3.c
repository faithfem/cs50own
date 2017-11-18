#include <cs50.h>
#include <stdio.h>

//IN ALL THE BELOW, I'VE SUBSTITUTED argv FOR userInput AND IT STILL WORKS!!!
int main(int argc, string userInput[]) //YOU CAN USE STRING ARGV[] OR CHAR* ARGV[]
//int main(int argc, char* userInput[]) //ARGC=ARGUMENT COUNT I.E. # OF INPUTS BY USER
{
    int i;
    // PRINT CONTENTS OF ARGC C, %D=SUPPLYING THE STRING WITH AN INTEGER VALUE, THE INTEGER TO SUPPLY IS THE VARIABLE IN ARGC
    printf("argc = %d\n", argc); //PRINTS argc = 4 i.e., there are 4 counts in the argument
    printf("What's in userInput[]\n"); // PRINTS "What's in argv[]"

    for (i = 0; i < argc; i++)
    {
        printf("userInput[%d] = %s\n", i, userInput[i]); //PRINTS THE LOOP SAYS, GO LOOK IN ARGUMENT VECTOR ARGV TO SEE WHAT USER HAS INPUT (SEE BELOW - THE LOOP)
    }

    return 0;
}