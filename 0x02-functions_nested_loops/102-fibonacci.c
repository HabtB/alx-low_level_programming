#include <stdlib.h>
#include <stdio.h>
/**
 * main- prints all the fibonacci numbers until 50
 *
 * Return: returns zero upon Success
 */

int main(void)
{
	int count;
	long int i = 1;
	long int j = 2;

	for (count = 0; count < 48; count++)
	{
		long int k;

		if (count == 0)
		{
			printf("%ld, ", i);
			printf("%ld, ", j);
		}
		k = i;
		i = j;
		j = k + j;
		if (count != 47)
			printf("%ld, ", j);
		else
			printf("%ld", j);
	}
	printf("\n");
	return (0);
}
