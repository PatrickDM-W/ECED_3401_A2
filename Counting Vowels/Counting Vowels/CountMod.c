/****************************************
Sept 21, 2022
Patrick Wain

CountMod.c
Contains function to count vowels
****************************************/

#include "CountingVowels.h"

void count_vows(char* pass_line, VC* data_rec)
{
	/* j as counter since i is defined */
	int j = 0;
	char ch;

	/*************************** 
	set vowels before begin 
	could be improved with dedicated reset funct
	***************************/
	data_rec[a].count = 0;
	data_rec[a].vowel = 'a';

	data_rec[e].count = 0;
	data_rec[e].vowel = 'e';
	
	data_rec[i].count = 0;
	data_rec[i].vowel = 'i';
	
	data_rec[o].count = 0;
	data_rec[o].vowel = 'o';
	
	data_rec[u].count = 0;
	data_rec[u].vowel = 'u';

	/* if each vowel is encountered */
	while (pass_line[j] != NULL)
	{
		ch = pass_line[j];

		if (ch == 'a' || ch == 'A')
		{
			data_rec[a].count++;
		}
		else if (ch == 'e' || ch == 'E')
		{
			data_rec[e].count++;
		}
		else if (ch == 'i' || ch == 'I')
		{
			data_rec[i].count++;
		}
		else if (ch == 'o' || ch == 'O')
		{
			data_rec[o].count++;
		}
		else if (ch == 'u' || ch == 'U')
		{
			data_rec[u].count++;
		}

		j++;
	}

	return;
}