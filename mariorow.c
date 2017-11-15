#include <stdio.h>
#include <cs50.h>

int main(void)
{
    {int height;

        do {
            printf("height: ");
            height = get_int();
            }
        while (height<0);

        for(int_row=2; row < height+2; row++)
    {
        int_spaces = height - row + 1;
        for(int spaces_counter = 0; spaces_counter < spaces; spaces_counter++)
    {
        printf(" ");
    }
        for (int blocks_counter=0; blocks_counter<row; blocks_counter++)
    {
        printf("#");
    }
        printf("\n");
    }

}