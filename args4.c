#include <cs50.h>
#include <stdio.h>

//IN ALL THE BELOW, I'VE SUBSTITUTED argv FOR userInput AND IT STILL WORKS!!!
int main(int argc, string userInput[]) //YOU CAN USE STRING ARGV[] OR CHAR* ARGV[]
//int main(int argc, char* userInput[]) //ARGC=ARGUMENT COUNT I.E. # OF INPUTS BY USER
{
    int i, sum = 0;
    // PRINT CONTENTS OF ARGC C, %D=SUPPLYING THE STRING WITH AN INTEGER VALUE, THE INTEGER TO SUPPLY IS THE VARIABLE IN ARGC
    printf("argc = %d\n", argc); //PRINTS argc = 4 i.e., there are 4 counts in the argument
    printf("What's in userInput[]\n"); // PRINTS "What's in argv[]"

    if(argc > 1) //SO CODE WILL ONLY EXECUTE IF MORE THAN ONE USER INPUT (COUNT)
    {
        for (i = 1; i < argc; i++) //CHANGE THIS TO i = 1 so u don't have to print the computer language argc...
        {
            printf("userInput[%d] = %s\n", i, userInput[i]); //PRINTS THE LOOP SAYS, GO LOOK IN ARGUMENT VECTOR ARGV TO SEE WHAT USER HAS INPUT (SEE BELOW - THE LOOP)
            //sum = sum + atoi(userInput[i]); //MUST ADD ATOI SO IT CAN CONVERT STRING TO INTEGER; ALPHAT TO INTEGER = "A TO I" = "ATOI"
            sum += atoi(userInput[i]); //SAME AS ABOVE BUT MUCH NEATER
        }
            printf("Total = %d\n", summ);
    }
    return 0;
}

//I DID NOT ASK CODE TO CHECK THAT INPUTS ARE ONLY INTEGERS AND NO ALPHA. THIS IS SOMETHING U CAN ALWAYS ADD