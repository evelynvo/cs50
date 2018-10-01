#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("Int x: ");
    int y = get_int("Int y: ");

    // Perform arithmetics
    printf("x + y = %i\n", x + y);
    printf("x - y = %i\n", x - y);
    printf("x * y = %i\n", x * y);
    printf("x / y = %i\n", x / y);
}
