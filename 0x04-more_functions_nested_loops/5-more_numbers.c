#include "main.h"
/**
 * more_numbers- prints the numbers from 1 to 14 ten times.
 *
 * Returns: none.
*/

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if ((j / 10) > 0)
				_putchar('0' + (j / 10));
			_putchar('0' + (j % 10));
		}
		_putchar('\n');
	}
}
