/****************************************
Sept 21, 2022
Patrick Wain

CountingVowels.c
Main program containing entry point
****************************************/

#include "CountingVowels.h"

FILE* infile;
char inrec[MAX_IN_REC];
VC data[NUM_VOWELS] = {{'a', 0}, {'e', 0}, {'i', 0}, {'o', 0}, {'u', 0}};

int main(int argc, char* argv[])
{
	/*
	- open file in argv[1], reads and checks sentences
	- at EOF, stop reading and close
	- if only one argument (.exe name), stop executing
	*/

	int j = 0;

	/* check number of arguments */
	if (argc == 1)
	{
		printf("Missing file name\n");
		getchar();
		return -1;
	}

	/* argc >= 1, attempt to open file */
	if (fopen_s(&infile, argv[1], "r") != 0)
	{
		printf("Error opening file >%s< - possibly missing\n", argv[1]);
		getchar();
		return -1;
	}

	/* File exists and is open, now read and count chars in each record */
	while ((fgets(inrec, MAX_IN_REC, infile) > 0) && inrec[0] != '#')
	{
		//printf("%s", inrec);
		/* run vowel analysis */
		count_vows(inrec, data);
		/* vowels are counted, sort */
		myVCBubble(data);
		/* vowels are sorted, print */

		printf("%s", inrec);

		while (j < NUM_VOWELS)
		{
			printVC(data[j]);
			j++;
		}
		/* reset for next run */
		printf("\n");
		j = 0;

	}

	getchar();

	return 0;
}

void printVC(VC vows)
{
	printf("%c: %d ", vows.vowel, vows.count);
	return;
}