#include <cs50.h>
#include <stdio.h> //need for fget()
#include <string.h> //need for stringLen()
#include <ctype.h>
#include <stdlib.h>

//FROM argc4 file, TRYING TO CHECK FOR ALPHA.
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
     for(i = 1; i < strlen(userInput[i]); i++)
      {
          if(isalpha(userInput[i]) == 0)
            {
                  printf("Usage: ./vigenere k\n");
                  return 1;

                for (i = 1; i < argc; i++) //CHANGE THIS TO i = 1 so u don't have to print the computer language argc...
                {
                    printf("userInput[%d] = %s\n", i, userInput[i]); //PRINTS THE LOOP SAYS, GO LOOK IN ARGUMENT VECTOR ARGV TO SEE WHAT USER HAS INPUT (SEE BELOW - THE LOOP)
                    //sum = sum + atoi(userInput[i]); //MUST ADD ATOI SO IT CAN CONVERT STRING TO INTEGER; ALPHAT TO INTEGER = "A TO I" = "ATOI"
                    sum += atoi(userInput[i]); //SAME AS ABOVE BUT MUCH NEATER
                }
                    printf("Total = %d\n", sum);
            }
                return 0;
        }
    }
}

