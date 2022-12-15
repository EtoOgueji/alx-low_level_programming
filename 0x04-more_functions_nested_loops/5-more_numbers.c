#include "main.h"

/**
 * more_numbers - prints 0 - 14 ten times
 *
 * Return: void
 */
void more_numbers(void)
{
	int c;

	int j;

	for (c = 0; c <= 10; c++)
		for (j = 0; j <= 14; j++)
        {
            if (j >= 10)
                _putchar('1');
                _putchar(j % 2 + '0');
        _putchar('\n');
        }
