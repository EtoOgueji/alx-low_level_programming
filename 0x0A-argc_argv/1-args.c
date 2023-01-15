#include "main.h"
/**
 * main - Prints the number of arguments
 * passed into it
 * @argc: count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}

