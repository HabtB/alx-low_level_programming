#include "main.h"
/**
 * print_triangle- prints a triangle.
 * @size: value of an integer
 *
 * Return: none.
*/

void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (j = 0; j < size; j++)
		{
			for (i = (size - 1); i >= 0; i--)
			{
				if (i <= j)
				_putchar('#');
			else
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
