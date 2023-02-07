/****************************************
Sept 21, 2022
Patrick Wain

BubbleSort.c
Bubble sort for vowel count
greater counts stored at lower indexes
sorted by moving lower counts downward
****************************************/

#include "CountingVowels.h"

void myVCBubble(VC* data_rec)
{
	/******************************************** 
	t/f flag
	j as counter since i is defined
	********************************************/
	bool sorted = false;
	int last = NUM_VOWELS;
	int index = 0;
	VC temp_vc;

	while (!sorted)
	{
		sorted = true;

		while (index < last)
		{
			if (data_rec[index].count < data_rec[index + 1].count)
			{
				/* unsorted, swap values */
				sorted = false;
				
				temp_vc = data_rec[index];
				data_rec[index] = data_rec[index + 1];
				data_rec[index + 1] = temp_vc;
			}

			index++;
		}
		index = 0;
		last--;
	}

	return;
}