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
	int i = 1;
	int j = 2;

	for (count = 0; count < 50 ; count++)
	{
		int k;

		if (count == 0)
		{
			printf("%d, ", i);
			printf("%d, ", j);
		}
		k = i;
		i = j;
		j = k + j;
		if (count != 49)
			printf("%d, ", j);
		else
			printf("%d", j);
	}
	printf("\n");
	return (0);
}
