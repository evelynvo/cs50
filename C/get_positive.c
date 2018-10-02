#include <cs50.h>
#include <stdio.h>

int get_positive_int(string some_prompt);

int main(void){
    int x = get_positive_int("Positive Int: "); 
    printf("Positive Int: %i", x);
}

int get_positive_int(string prompt){
    int n;
    
    do
    {
        n = get_int(prompt);
    } while (n < 1);
    
    return n;
    
}
