#include <stdio.h>

/**
 * main - Fizz-Buzz test
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	int (i = 1; 1 <= 100; i++)
	{
		if ((i % 5) == 0 && (i % 3) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
}
