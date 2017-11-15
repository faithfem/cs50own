#include <stdio.h>
#include <cs50.h>

int factorialize(int num);

int main (void)
{
    printf( "Factorialize: ");
    int n = get_int();
    printf("The answer is: %lli", factorialize(n));
}



int factorialize(int num)
    {
        if
            (num <= 1){return 1;}
        else
            {return num * factorialize(num-1);
    }