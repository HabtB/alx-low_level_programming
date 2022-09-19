#include <stdio.h>
#include "main.h"


/**
 * swap_int- swaps the values of two integers
 * @a: is a pointer to an int
 * @b: is a pointer to an int
 *
 * Return: none
 */

void swap_int(int *a, int *b)
{

	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;

}
