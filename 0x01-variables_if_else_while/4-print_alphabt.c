#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main-prints all alphabets in small letters except 'e' and 'q'
 *
 * Return:returns always zero
 */
int main(void)
{
	int c = 97;

	for (; c <= 122; c++)
	{
		if (c != 'e' && c != 'q')
		putchar(c);
	}
	putchar(10);
	return (0);
}
