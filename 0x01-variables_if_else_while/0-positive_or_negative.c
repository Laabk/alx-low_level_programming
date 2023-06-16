#include <stdib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Indentifying a positive and negative numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n:

	strand(time(0));
	n = rad() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negastive\n", n);
	}
	return (0);
}
