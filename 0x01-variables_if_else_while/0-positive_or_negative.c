#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive%s\n", n, "negative");
	}
	else if (n == 0)
	{
		printf("%d is zero%s\n", n, "positive");
	}
	else
	{
		printf("%d is negative%s\n", n, "zero");
	}
	return (0);
}

