#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main-printts all numbers without using a char variable and printf and puts
 *
 * Return:returns always zero
 */
int main(void)
{
	int c = 48;

	for (; c <= 57; c++)
		putchar(c);

	putchar(10);
	return (0);
}
