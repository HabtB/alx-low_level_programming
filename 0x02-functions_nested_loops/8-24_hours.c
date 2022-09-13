#include "main.h"

/**
 * jack_bauer- prints all the minutes in 24 hours
 *
 * Return: retuns nothing
 */

void jack_bauer(void)
{
	int hrs = 0;

	while (hrs < 24)
	{
		int mins = 0;

		while (mins < 60)
		{
			_putchar('0' + (hrs / 10));
			_putchar('0' + (hrs % 10));
			_putchar(':');
			_putchar('0' + (mins / 10));
			_putchar('0' + (mins % 10));
			_putchar('\n');
			mins++;
		}
	if (mins != 60)
		_putchar('\n');
	hrs++;
	}
}
