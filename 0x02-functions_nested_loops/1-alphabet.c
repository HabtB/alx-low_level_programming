#include "main.h"
/**
 * print_alphabet- prints all the alphabets of english in one line
 *
 * Return: always returns none
 */

void print_alphabet(void)
{
	char a = 'a';

	for (; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
}
