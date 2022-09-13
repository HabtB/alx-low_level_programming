#include <stdio.h>
#include "main.h"

/**
 * print_to_98- prints all the numbers to 98
 * @c: is an integer value from which counting starts
 *
 * Return: retuns nothing
 */

void print_to_98(int c)
{
	while ((c < 98) || (c > 98))
	{
		if (c < 98)
		{
			printf("%d, ", c);
			c++;
		}
		else
		{
			printf("%d, ", c);
			c--;
		}
	}
	printf("%d\n", 98);
}
