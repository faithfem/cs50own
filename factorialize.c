#include<cs50.h>
#include<stdio.h>

int factorialize(int number)
{
    unsigned long long a;
    for ( a=1; number >=1; number--)
    {

        a = number * a;
    }
    return a;
}


int main(void)
{
    int number;
    do
    {
        printf("Enter a positive integer: \n");
        number = get_int();

        unsigned long long answer = factorialize(number);
        printf("The answer is  %llu: \n", answer);

    }
    while (number < 0 );
}
