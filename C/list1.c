#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int *numbers = NULL;
    int capacity = 0;

    int size = 0;

    
    while(true)
    {
        int number = get_int("Number: ");

        if (number == INT_MAX) 
            /* should type Ctrl+D 
            in order to send EOF input */
        {   
            printf("\n");
            break;
        }

        if (size == capacity) // = If we have no more space
        { 
            numbers = realloc(numbers, sizeof(int) * (size + 1));
            capacity++;     
        }

        numbers[size] = number;
        size++;

    }
    
    for (int i = 0; i < size; i++)
    {
        printf("You inputted %i\n", numbers[i]);
    }

    free(numbers);
}
