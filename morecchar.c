#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char("enter char: ");
    if (c == 'Y' || c == 'y')           // "||" mean or. So Y or y
    {
        printf("yes\n");
    }                                   // "&&" means and so both expressions have to be true

    else if (c =='N' || c == 'n')
    {
        printf("no\n");
    }

        else
    {
        printf("error\n");
    }

}