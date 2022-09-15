#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 * main - finds the largest prime factor of a number
 *
 * Return: returns 0 on success
 */

int main(void)
{
	unsigned long n = 1231952;
	int i = 2;

	while (i < (0.5 * n))
	{
		if (n % i == 0)
		{
			n = (double) (n / i);
			i = 2;
		}
		else
			i++;
	}

	printf("%lu\n", n);
	return (0);
}
