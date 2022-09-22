#include "main.h"

/**
 * reverse_array- reverses the array
 * @a: is a pointer to an integer
 * @n: is the value of an integer
 *
 * Return: returns nothing
 */

void reverse_array(int *a, int n)
{

	int j = 0;
	int i = n - 1;

	while (j < n / 2)
	{
		int tmp;
		tmp = a[j];
		a[j] = a[i];
		a[i] = tmp;
		i--;
		j++;
	}

}
