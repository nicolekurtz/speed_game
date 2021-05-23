// Nicole Kurtz - Typing Speed Game
#include "speed_game.h"

// this function randomizes the words in the array
void randomize_words(char ** array, int SIZE)
{
	// get seed for srand
	gettimeofday(&seed,NULL);
	srand(seed.tv_usec);

	char * temp;
	
	// swaps randomly picked number with
	// current for loop value
	for(int i = 0; i < SIZE; ++i)
	{
		int index = rand() % SIZE;
		temp = array[index];
		array[index] = array[i];
		array[i] = temp;
	}

}

// this function tracks the time of the game
// and checks if input matches value
void play_game(char ** array, int SIZE)
{
	if(printf("\nThis is a game that tests typing speed\n\n") < 0)
	{
		error(EXIT_FAILURE, 0, "Input error");
	}
	
	if(printf("Type the following words:\n") < 0)
	{
		error(EXIT_FAILURE, 0, "Input error");
	}

	// set the start time of the game
	gettimeofday(&startTime, NULL);

	char response[100];
	
	// loop through every word
	for(int i = 0; i < SIZE; ++i)
	{
		// loop until user types correct word
		while(strncmp(array[i], response, 6) != 0)
		{
			// print current word to type
			if(printf("Word # %i %s: ", (i + 1), array[i]) < 0)
			{
				error(EXIT_FAILURE, 0, "Input error");
			}
			// take in user input
			if(scanf("%s", response) == 0)
			{
				error(EXIT_FAILURE, 0, "Input error");
			}

			// flush input
			char c;
			while((c = getchar()) != '\n' && c != EOF);
		}
	}
	
	// gets end time
	gettimeofday(&endTime, NULL);
	
	// calculates duration based on start and end time
	timersub(&endTime, &startTime, &duration);
	
	// prints time it took to play game
	if(printf("You took %ld seconds and %ld milliseconds \n", duration.tv_sec, duration.tv_usec) < 0)
	{
		error(EXIT_FAILURE, 0, "Input error");
	}
}
		
