#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc ==2){


    printf("Plaintext: ");
    string userWord = get_string();
    //printf("Key: ");
    //string keyString = get_string();
    int key = atoi(argv[1]);
    //int key = atoi(userWord);

    for (int i = 0; i < strlen(userWord); i++)
    {
        printf("%c", userWord[i]+ key);
    }
        printf("\n");

    }


}