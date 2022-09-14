#include <stdlib.h>
#include <stdio.h>

/**
 * main- prints all the fibonacci numbers until 50
 *
 * Return: returns zero upon Success
 */

int main(void)
{
	long int i = 1;
	long int j = 2;
	long sum = 0;

	while (i < 4000000)
	{
		long int k;

		k = i;
		i = j;
		j = k + j;

		if (i % 2 == 0)
			sum = sum + i;
	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}
