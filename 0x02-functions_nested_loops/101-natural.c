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
	int j;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 1; i < 1024 / 3; i++)
	{	int num1 = i * 3;
		sum1 = num1 + sum1;
	}

	for (j = 1; j < 1024 / 5; j++)
	{
		int num2 = j * 5;

		sum2 = sum2 + num2;
	}
	printf("The total sum is: %d\n", sum1 + sum2);
	return (0);
}
