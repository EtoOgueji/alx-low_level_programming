#include "main.h"

/**
 * more_numbers - prints 0 - 14 ten times
 *
 * Return: void
 */
void more_numbers(void)
{
	int c;

	for (c = 0; c <= 14; c++)
		for (count = 0; count <= 10; count++)
			_putchar(c);
	_putchar('\n');
}
