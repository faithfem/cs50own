#include <cs50.h> // Library contains custom functions like get_char, get_int, etc
#include <stdio.h> // Library contains basic C functions like printf and a variable called string

int main(void)
{

printf("Name: "); // This can be left out, but good to have it so you know what is being prompted for. In this case, it will be asking for the Name
string name = get_string(); // Creates a string variable called name which uses a function get_string
printf("hello, %s\n", name); // %\n is a syntax that stroes the value of whatever the variable name will be, then a comma then name

} // compile by typing "make string" (without quotes) in the terminal
// then type ./string to run. It will show a blank space meaning it's waiting for a string. Type in, e.g., Dave and the result should show "hello, Dave" without the quotes

