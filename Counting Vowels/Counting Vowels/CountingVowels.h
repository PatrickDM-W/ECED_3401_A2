/****************************************
Sept 21, 2022
Patrick Wain

CountingVowels.h
Header file containing common files and definitions
****************************************/

#pragma once

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define NUM_VOWELS 5
#define MAX_IN_REC 200
#define NULL '\0'

#define a 0
#define e 1
#define i 2
#define o 3
#define u 4

struct vow_count
{
	char vowel;
	int count;
};

typedef struct vow_count VC;

extern void count_vows(char*, VC*);
extern void myVCBubble(VC*);
extern void printVC(VC);