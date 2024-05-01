#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
	srand(time(NULL));

	int answer;
	int random_number;
	int arr[10];
	int attempts = 3;
	int i;

	bool game_over = false;
	do
	{
		random_number = rand() % 10 + 1;
		arr[0] = random_number;
		for (i = 0; i < attempts; i++)
		{
			printf("Guess the number between 1-10\n\n");
			printf("Answer:");
			scanf("%d", &answer);
			if (answer == arr[0])
			{
				printf("\nGood Job!\n");
				game_over = true;
			}
			else printf("Try again...\n\n");
		}
	}
	while (!game_over);
	{
		printf("Game Over...\n\n");
	}
	return(0);
}
