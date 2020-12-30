/* woohoo! */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define MAXFRET 12
#define MINFRET 3
#define NUMKEYS 12
#define NUMMODES 6

int main(int argc, char **argv) {

	const char* const keys[] = {
		"A", "A",
		"A-sharp", "B-flat",
		"B", "B",
		"C", "C",
		"C-sharp", "D-flat",
		"D", "D",
		"D-sharp", "E-flat",
		"E", "E",
		"F", "F",
		"F-sharp", "G-flat",
		"G", "G",
		"G-sharp", "A-flat"
	};


	const char* const modes[] = {
		"Ionian",
		"Dorian",
		"Phygian",
		"Lydian",
		"Mixolydian",
		"Aelian"
	};

	printf("Find this scale:\n");

	srand(time(NULL));
	int key = rand() % (2 * NUMKEYS);
	int mode = rand() % NUMMODES;
	int fret = MINFRET + rand() % (1 + MAXFRET - MINFRET);

	printf("Key: %s\n", keys[key]);
	printf("Mode: %s\n", modes[mode]);
	printf("Including Fret: %d\n", fret);


	return 0;
}
