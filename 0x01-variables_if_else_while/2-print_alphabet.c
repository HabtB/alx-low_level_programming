#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main-printts all alphabets in small letters
 *
 * Return:returns always zero
 */

int main(void)
{
	char ch = 'a';

	for (; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar(10);
	return (0);
}
