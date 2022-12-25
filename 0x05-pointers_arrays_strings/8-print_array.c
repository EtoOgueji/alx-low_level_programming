#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the items in an array.
 * @a: The array to print items from.
 * @n: The number of elements in the array, a.
 * Description: Numbers must be seperated by comma, followed by a space
 * and are displayed in the same order as they are stored in the array
 *
 * Return: Void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d", *(a + 1));
		_putchar(',');
		_putchar(' ');
	}
	printf("%d", *(a + i));
}
