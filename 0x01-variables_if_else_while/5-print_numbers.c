#include <stdio.h>

/**
 * main - Prints all single digit numbers
 * start from 0
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
