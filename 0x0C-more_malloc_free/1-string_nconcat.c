#include "main.h"

/**
 * _strlen- returns the length of the a string
 * @s: a character array
 *
 * Return: returns an integer
 */


int _strlen(char *s)
{

	int i = 0;

	if (*s != '\0')
	{
		while (s[i] != '\0')
		{
			i++;
		}
		return (i);
	}
	else
		return (0);
}


/**
 * string_nconcat- concatenates strings
 * @s1: the first string
 * @s2: the second string
 * @n:  an integer value
 *
 * Return: returns a concatenated string
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int c1 = 0;
	char *str;
	
	if (*s1 == '\0')
		s1 = "";
	else
		c1 = _strlen(s1);

	str = malloc(sizeof(char) * (c1 + n + 1));

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (c1); i++)
		str[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}

	str[c1 + n] = '\0';

	return (str);
}
