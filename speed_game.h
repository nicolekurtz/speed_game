// Nicole Kurtz
// This file holds my protypes and structs 

#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <time.h>
#include <string.h>
#include <error.h>

// protypes
void randomize_words(char **, int);
void play_game(char **, int);

struct timeval startTime;
struct timeval endTime;
struct timeval duration;
struct timeval seed;

