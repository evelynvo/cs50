#include <cs50.h>
#include <stdio.h>

void chart(int count, int scores[]);

const int COUNT = 3;

int main(void)
{
    int scores[COUNT];
    
    for(int i = 0; i < COUNT; i++)
    {
        scores[i] = get_int("Score %i: ", i + 1);
    }
    chart(COUNT, scores);
}

void chart(int count, int scores[]){
    // Output one hash per point
    
    for(int i = 0; i < count; i++)
    {
        
        for(int j = 0; j < scores[i]; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    
}