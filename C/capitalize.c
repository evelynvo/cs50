// Just copy - pasted from CS50's github

/****************************************************************************
 * capitalize.c
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Capitalizes a given string.
 *
 * Demonstrates casting and iteration over strings as arrays of chars.
 ***************************************************************************/

#include <cs50.h>
#include <stdio.h>
#include <string.h>

    int
    main(void)
{
    // get line of text
    string s = get_string("Your string here: \n"); // I changed this line

    // capitalize text
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            printf("%c", s[i] - ('a' - 'A'));
        else
            printf("%c", s[i]);
    }
    printf("\n");

    return 0;
}