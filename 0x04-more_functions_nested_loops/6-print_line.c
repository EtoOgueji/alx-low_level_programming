#include "main.h"

/**
 * print_line - draws a straight line
 * @n: size of line
 * Return: void
 */
void print_line(int n)
{
	int i;

	char e = '_';

	for (i = 0; i <= n; i++)
		if (n <= 0)
			_putchar('\n');
		else
			_putchar(e);
	_putchar('\n');
}