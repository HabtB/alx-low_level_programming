#include <stdio.h>
#include "main.h"


/**
 * print_array- reverses a string
 * @a: is a pointer to an integer
 * @n: is an integer value
 *
 * Return: none
 */

void print_array(int *a, int n)
{

	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(",");
			printf(" ");
		}
		i++;
	}
	printf("\n");
}
