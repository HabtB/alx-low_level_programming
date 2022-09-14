#include <stdlib.h>
#include <stdio.h>
/**
 * main - first 98 fibonatchi numbers
 *
 * Return: void.
 */
int main(void)
{
	unsigned long int a, b, b0, b1, c, c0, c1;
	int m, n;

	a = 1;
	b = 2;
	c = a + b;

	printf("%lu, ", a);
	printf("%lu, ", b);
	for (m = 3; m < 89; m++)
	{
		printf("%lu, ", c);
		a = b;
		b = c;
		c = a + b;
	}
	b0 = b / 1000000000;
	b1 = b % 1000000000;
	c0 = c / 1000000000;
	c1 = c % 1000000000;
	for (n = 89; n < 98; n++)
	{
		unsigned long int x, y;

		printf("%lu%lu, ", c0, c1);
		x = b0;
		y = b1;
		b0 = c0;
		b1 = c1;
		c0 = c0 + c0 + ((y + b1) / 1000000000);
		c1 = (y + b1) % 1000000000;
	}
printf("%lu%lu\n", c0, c1);
	return (0);
}
