#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char();
    if (c =='y' || c =='Y') //|| is "or". Embedding the formula this way helps prevent having too many else if statements
    {
    printf("yes\n");
    }
else if(c == 'n' || c== 'N')
    {
printf("no\n");
    }
else
    {
    printf("error\n");
    }
}