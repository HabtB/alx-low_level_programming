#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main-printts all alphabets both in lower and upper cases
 *
 * Return:returns always zero
 */
int main(void)
{
	int c = 97;

	char ch = 'A';

	for (; c <= 122; c++)
		putchar(c);

	for (; ch <= 'Z'; ch++)
		putchar(ch);

	putchar(10);
	return (0);
}
