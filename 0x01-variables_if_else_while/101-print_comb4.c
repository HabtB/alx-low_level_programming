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
	int f = 50;

	while ((d <= 55) && (e <= 56) && (f <= 57))
	{
		putchar(d);
		putchar(e);
		putchar(f);

		if ((d == 55) && (e == 56) && (f == 57))
		{
			putchar(10);
			d++;
			e++;
			f++;
		}
		else
		{
			putchar(',');
			putchar(' ');

			if (f < 57)
				f++;
			else if ((e < 56) && (f == 57))
			{
				e++;
				f = e + 1;
			}
			else
			{
				d++;
				e = d + 1;
				f = e + 1;
			}
		}
	}

	return (0);
}
