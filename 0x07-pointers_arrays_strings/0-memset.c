#include "main.h"
/**
 * _memset - fills the first n bytes of the
 * memory area pointed to by s with the constant byte b
 * @s: array name
 * @b: constant byte/value
 * @n: number of times to print b
 *
 * Return: S (Success)
 */
char *_memset(char s[], char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		*(s + i) = b;
		n--;
	}
	return (s);
}
