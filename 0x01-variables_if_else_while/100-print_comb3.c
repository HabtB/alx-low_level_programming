#include <stdlib.h>

/**
 * main-prints all single digit numbers separated by comma
 *
 * Return:returns always zero
 */

int main(void)
{
	int d;
	int e;

	for (d = 48; d <= 57; d++)
	{
		for (e = d + 1; e <= 57; e++)
		{
			putchar(d);
			putchar(e);

			if (d != 56 || e != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar(10);
	return (0);
}
