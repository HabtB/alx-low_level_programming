#include <stdlib.h>
#include <stdio.h>

/**
 * main-prints all single digit numbers separated by comma
 *
 * Return:returns always zero
 */

int main(void)
{
	int d = 48;
	int e = 49;

	while (d <= 57)
	{
		putchar(d);
		putchar(e);

		if (d == 56 && e == 57)
		{
			putchar(10);
			d++;
			e++;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
		if (e < 57)
			e++;
		else
		{
			d++;
			e = d + 1;
		}

	}

	return (0);
}
