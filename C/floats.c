#include <cs50.h>
#include <stdio.h>

int main(void)
{
    /* code */
    double x = get_double("Float x: ");
    double y = get_double("Float y: ");

    // Perform arithmetics
    printf("x + y = %f\n", x + y);
    printf("x - y = %f\n", x - y);
    printf("x * y = %f\n", x * y);
    printf("x / y = %.50f\n", x / y);
}
