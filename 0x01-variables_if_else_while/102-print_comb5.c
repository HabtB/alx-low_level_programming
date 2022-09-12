#include <stdio.h>
#include <stdlib.h>
/**
 * main-Prints 2- 2digit numbers without repeating themselves separated by ' '
 *
 * Return: returns 0
 */
int main(void)
{
	int i = '0';
	int j;
	int k;
	int l;

	for (; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				for (l = '0'; l <= '9'; l++)
				{
					if ((i < k) || (i == k && j < l))
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);

					if (!(i == '9' && j == '8'))
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}


