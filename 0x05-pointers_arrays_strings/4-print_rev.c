#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: string to reverse
 *
 * Return: Void
 */
void print_rev(char *s)
{
	int len = 0, i;

	while (len >= 0)
	{
		if (s[len] == '\0')
			break;
		len++;
	}


	for (len--; len >= 0; len--)
		_putchar(s[len]);
	_putchar('\n');
}
