
Search or jump to…
Pull requests
Issues
Codespaces
Marketplace
Explore
 
@EtoOgueji 
EtoOgueji
/
alx-low_level_programming-1
Public
forked from Tolulope05/alx-low_level_programming
Code
Pull requests
Actions
Projects
Wiki
Security
Insights
Settings
alx-low_level_programming-1/0x06-pointers_arrays_strings/7-leet.c
@Tolulope05
Tolulope05 tolulopedsvid
Latest commit 7dde046 on Mar 23
 History
 1 contributor
Executable File  29 lines (26 sloc)  510 Bytes

#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: input string.
 * Return: the pointer to dest.
 */

char *leet(char *s)
{
	int count = 0, i;
	int low_letters[] = {97, 101, 111, 116, 108};
	int upp_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + count) == low_letters[i] || *(s + count) == upp_letters[i])
			{
				*(s + count) = numbers[i];
				break;
			}
		}
		count++;
	}

	return (s);
}
