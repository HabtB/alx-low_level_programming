#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main-prints all hexa-decimal numerals
 *
 * Return:returns always zero
 */

int main(void)
{
	int d = 48;
	char h = 'a';

	for (; d <= 57; d++)
		putchar(d);

	for (; h <= 'f'; h++)
		putchar(h);

	putchar(10);
	return (0);
}
