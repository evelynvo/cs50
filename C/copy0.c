#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    // Get a string
    string s = get_string("s: ");

    // Copy string's address
    string t = s;

    // Capitalize the first letter in string
    
    if (strlen(t) > 0) {
        t[0] = toupper(t[0]);
    }
    
    // Print string twice
    printf("s: %s\n", s);
    printf("t: %t\n", t);
}