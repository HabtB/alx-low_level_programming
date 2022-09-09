#include <stdio.h>
#include <stdlib.h>

/**
 * main-prints all single digit numbers separated by comma
 *
 * Return:returns always zero
 */

int main(void)
{
	int d = 48;

	for (; d <= 57; d++)
	{
		putchar(d);
		if (d != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar(10);
	return (0);
}
