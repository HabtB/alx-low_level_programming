#include <stdlib.h>
#include <stdio.h>
/**
 * main- prints the sum of the numbers of multiples of 3 and 5
 *
 * Return: returns zero upon Success
 */

int main(void)
{
	int i;
	int sum = 0;

	for (i = 1; i < 1024 ; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum = i + sum;
	}
	printf("%d\n", sum);
	return (0);
}
