#include <cs50.h>
#include <stdio.h>

const int COUNT = 3;

void chart(int score);

int main(void)
{
	int scores[COUNT];

	// Get scores from user
	for (int i = 0; i < COUNT; ++i)
	{
		scores[i] = get_int("Score %i: ", i + 1);
	}

	// Chart scores
	for (int i = 0; i < COUNT; ++i)
	{
		chart(scores[i]);
	}
	
}

void chart(int score){
	for (int i = 0; i < score; i++)
	{
		printf("#");
	}
	printf("\n");
}
