#include "main.h"

/**
 * _strcpy - copies a string to another variable
 * @dest: destination
 * @src: string to be copied
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}

	return (dest);
}
