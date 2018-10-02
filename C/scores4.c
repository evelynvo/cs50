#include <cs50.h>
#include <stdio.h>

void chart(int count, int scores[])

const int COUNT = 3;

int main(void)
{
    int scores[3] = [100, 75, 50];
    
    for(int i = 0; i < COUNT; i++)
    {
        chart(COUNT, scores[]);
    }
    
    
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