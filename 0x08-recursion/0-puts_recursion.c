#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: string to be printed
 *
 * Return: Void;
 */

void _puts_recursion(char *s)
{
	int i;

	i = _strlen(s);

	if (i == '\0')
		return;
	_putchar(*s);

	_puts_recursion(s + 1);
}
