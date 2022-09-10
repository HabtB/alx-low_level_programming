#include <stdlib.h>
#include <stdio.h>

/**
 * main-prints all single digit numbers separated by comma
 *
 * Return:returns always zero
 */

int main(void)
{
	int d;
	int e;
	int f;

	for (d = 0; d <= 9; d++)
	{
		for (e = 1; e <= 9; e++)
		{
			for (f = 2; f <= 9; f++)
			{
				if ((d < e && e < f) && (d != 55 || e != 56 || f != 57))
				{
					putchar(d);
					putchar(e);
					putchar(f);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar(10);
	return (0);
}
