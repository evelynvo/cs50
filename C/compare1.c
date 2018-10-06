#include <cs50.h>
#include <stdio.h>

int main(void)
{

    string s1 = get_string("s1: ");
    string s2 = get_string("s2: ");

    if (s1 == s2)
    {
        printf("same\n");
    }
    else
    {
        printf("different\n");
    }
}