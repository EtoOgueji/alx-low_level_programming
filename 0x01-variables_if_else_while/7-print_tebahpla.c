#include <stdio.h>

/**
 * main - Prints the alphabets
 * in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'z';

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');

	return (0);
}
