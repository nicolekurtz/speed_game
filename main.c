// Nicole Kurtz
// speed game -- tests how long it takes user to type the correct word
#include "speed_game.h"

int main(int argc, char ** argv)
{
	// creation of array of words of size 9
	const int SIZE = 9;
	char * words[SIZE];

	words[0] = "The";
	words[1] = "quick";
	words[2] = "brown";
	words[3] = "fox";
	words[4] = "jumps";
	words[5] = "over";
	words[6] = "the";
	words[7] = "lazy";
	words[8] = "dog";
	
	// randomizes all the words in teh array
	randomize_words(words, SIZE);
	// allows user to type words and times them
	play_game(words, SIZE);

	// end program
	exit(0);
}

