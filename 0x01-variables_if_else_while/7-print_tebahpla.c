#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main-prints all lower case alphabets in reverse order
 *
 * Return:returns always zero
 */
int main(void)
{
	int c = 122;

	for (; c > 96; c--)
		putchar(c);

	putchar(10);
	return (0);
}
