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

	while (*s++)
	{
		len++;
	}


	for (i = len - 1; i > 0; i--)
	{
		if (i == '\0')
		{
			break;
		}

		_putchar(s[i]);
	}
	_putchar(s[0]);
	_putchar('\n');
}
