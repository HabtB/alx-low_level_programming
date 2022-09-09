#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main-prints all single digit numbers
 *
 * Return:returns always zero
 */
int main(void)
{
	int c = 0;

	for (; c <= 9; c++)
		printf("%d", c);

	putchar(10);
	return (0);
}
