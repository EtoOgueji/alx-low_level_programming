#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the strings to be worked on
 *
 * Return: Value of length
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s++)
	{
		count++;
	}

	return (count);
}
