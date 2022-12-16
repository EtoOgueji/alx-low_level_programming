#include "main.h"

/**
 * print_square - prints a square followed by a new line
 * @size: size of the square
 * Return: Void
 */
void print_square(int size)
{
	int count, i;
	
	if (size <= 0)
		_putchar('\n');

	for (count = 0; count < size; count++)
	{
		for (i = 0; i < size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
