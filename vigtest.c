#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string userInput[])
{
    // Check if correct # of arguments given
    if (argc != 2)
    {
            printf("Dude, enter a Word!\n");
            return 1;
    }
    else
    {
        for (int i = 0, n = strlen(userInput[1]); i < n; i++)
        {
            if (!isalpha(userInput[1][i]))
            {
                printf("Usage: .vigenere k\n");

                return 1;
            }
        }
    }

    // Store key as string and get length
    string m = userInput[1];
    int kLen = strlen(m);

    // Get text to encode
    printf("Plaintext: ");
    string p = get_string();

    for (int i = 0, j = 0, n = strlen(p); i < n; i++)
    {
        //CHECK IF KEY USER ENTERED IS IN LOWER OR UPPER CASE
        int userCodeKey = tolower(m[j % kLen]) - 'a';

        // CHECK IF UPPERCASE
        if (isupper(p[i]))
        {
            printf("%c", 'A' + (p[i] - 'A' + userCodeKey) % 26);

            j++;
        }
        else if (islower(p[i]))
        {
            printf("%c", 'a' + (p[i] - 'a' + userCodeKey) % 26);
            j++;
        }
        else
        {
            printf("%c", p[i]);
        }
    }

    printf("\n");

    return 0;
}