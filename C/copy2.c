#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    // Get a string
    char *s = get_string("s: ");
    
    if (!s) {
        return 1;
    }
    
    // Allocate memory for another string
    char *t = malloc( ( strlen(s) + 1 ) * sizeof(char) );
    
    if (!t) {
        return 1;
    }
    
    // Copy the string into memory:
    strcpy(t, s);
    

    // Capitalize the first letter in string
    
    if (strlen(t) > 0) {
        t[0] = toupper(t[0]);
    }
    
    // Print string twice
    printf("\ns: %s\n", s);
    printf("t: %s\n", t);

    // Free memory
    free(t);
    return 0;
}
