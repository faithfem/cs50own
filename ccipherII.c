#include <cs50.h>
#include <stdio.h> //need for fget()
#include <string.h> //need for stringLen()
#include <ctype.h>
#include <stdlib.h>

// USE "int main(int argc, string argv[])" unlike in ccipher.c

//Program will convert a plain text/word and create a cipher by using a key shift add of 1
// so e.g., hello will be ifmmp
//It works as follows with key =
//((int)letter + key) mod  will return the letter as a number
// i) int of letter
// ii) i above plus key
// iii) subtract 26 if i+ii>26
// iv) new letter is the letter corresponding to the integer result in iii above
// hello becomes
// int of letter h = 7
// 7 + 1 = 8
// integer 8 is letter i with a 7 shift i.e., the char of the cyper value; (char)cipherValue

//ASCII 'a'=97, 'b'=98, 'c'=99 etc so will subtract 97

//void caesarCipher(char* plainText, int key); //it will take in a plain text and a key
int main(int argc, string argv[])
//int main(void)
{

    int key = 1;
    char plainText[101];
    //argc string[i]; // USE OF ARGC INSTEAD OF CHAR

    //Ask for text to encrypt
    printf("userWord: ");

    //Get user's input and store in a plainText variable
    fgets(plainText, sizeof(plainText), stdin);

    //Print the ciphered text
    printf("ciphertext: ");

//BELOW IS THE CODE FOR PRINTING THE CIPHERED TEXT
    //caesarCipher(plainText, key);


//void caesarCipher(char* plainText, int key);

    int i = 0;
    char cypher;
    int cypherValue;

    while(plainText[i] != '\0' && strlen(plainText)-1>i)
    {
        cypherValue = ((int)plainText[i] - 97 + key) %26 + 97;
        cypher = (char)(cypherValue);
        printf("%c", cypher);
        i++;
}
    printf("\n");
}
