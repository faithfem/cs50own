#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{

    int i;
    for(i = 0; i < 10; i++)
    {
        printf("%d ", i);
    }
    printf("\n");

    for(i=0; i<20; i=i+2) //no bracket, means loop continues if it no longer satisfies this part of the loop
    printf("%d", i);
    for (i=10; i>0; i--){
        printf("%d ", i);
    }
    printf("\n");

    //NEXT EXAMPLE

    for(i = 0; i >-10; i--)
    printf("%d ", i); //prints 0, -1, -2 etc to -9

    printf("\n");
    i = 256; //initialize here so u don't have to initialize in line below
    for( ;i >=2; i/=2){
        printf("%d ",i); // prints 256, 128, 64, 32, 16, etc to 2. After 2, moves to loops below
    }

    int j=50;
    for( i = 0, j=20; i<j; i++, j--){
        printf("i=%d and j=%d \n", i, j);
    }
    printf("\n"); //prints i=1 and j=19; i=2 and j=18 etc




}
