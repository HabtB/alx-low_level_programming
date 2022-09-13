#include <stdio.h>
#include "main.h"
/**
 * main- prints the string '_putchar'
 *
 * Return: returns 0
 */
int main(void)
{
	char word[8] = "_putchar";

	{
		int i = 0;

		for (; i < 8; i++)
			_putchar(word[i]);
	}
	_putchar('\n');
	return (0);
}
