#include <stdio.h>
#include <cs50.h>

int main(void){
	string name = get_string("Type in your name: ");
	printf("Hello %s", name);
	printf("\nHello, World!\n");
	int i = get_int("What's your age?");
}

//just a line of comments
