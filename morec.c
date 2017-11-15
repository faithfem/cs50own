#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("enter #: " );
    if (x<0)
    {
        printf("negative\n");
    }

    else if (x>0)
    {
        printf("positive\n");
    }

    else
    {
        printf("zero\n");
    }

}