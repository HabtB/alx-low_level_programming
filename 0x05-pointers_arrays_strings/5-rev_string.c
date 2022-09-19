#include <stdio.h>
#include "main.h"


/**
 * rev_string- reverses a string
 * @s: is a pointer to a string
 *
 * Return: none
 */

void rev_string(char *s)
{

	int i = 0;
	int j = 0;
	int len;
	char rev[1000];

	while (s[i] != 0)
	{
		i++;
	}

	len = i;

	for (i = len - 1; i >= 0; i--)
	{
		rev[j] = s[i];
		j++;
	}

	for (i = 0; i <= len - 1; i++)
	{
		s[i] = rev[i];
	}
}
