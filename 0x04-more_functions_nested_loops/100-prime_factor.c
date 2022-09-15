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
	double n = 612852475143;
	double m = 612852475143;
	int largest_pm;
	int i = 2;
	int imax = 1;

	while (i <= (int)(sqrt(n)))
	{
		if ((int) n % i == 0)
		{
			imax = i * imax;
			n = (double) (n / i);
			i = 2;
		}
		else
			i++;
	}

	largest_pm = m / imax;

	printf("%d\n", largest_pm);
	return (0);
}
