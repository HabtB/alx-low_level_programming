#include "main.h"

int convert2int(char *s);
int _strlen(char *s);
int _isdigit(int c);

/**
 * main- prints the product of two arguments passed
 * @argc: number of arguments
 * @argv: array of pointers to string arguements
 *
 * Return: always 0 for success
 */


int main(int argc, char *argv[])
{
	int i, j, sum;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!_isdigit(argv[i][j]) && argv[i][j] != 45)
			{
				printf("Error\n");
				return (1);
			}
		}

		if (*argv[i] == 48)
			continue;

		else
			sum += convert2int(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}

/**
 * _strlen- prints out the length of the specified string
 * @s: string which length is to be calculated
 *
 * Return: returns the length of the string
 */

int _strlen(char *s)
{
	int size = 0;

	while (*s)
	{
		size++;
		s++;
	}
	return (size);
}

/**
 * convert2int- coverts a string into an integer
 * @s: string
 *
 * Return: integer value
 */

int convert2int(char *s)
{
	int size, i, number, isNegative;

	size = _strlen(s);
	number = 0;
	isNegative = 0;

	for (i = 0; i < size; i++)
	{
	if (s[i] == 45)
	{
		isNegative = 1;
		continue;
	}
	else if (s[i] > 47 && s[i] < 58)
	{
		number = (number * 10) + (s[i] - 48);
	}
	else
		return (0);
	}
	if (isNegative)
		return (-1 * number);

	return (number);
}

/**
 * _isdigit- check if character is from 0 to 9
 * @c: integer value
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */

int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
		return (1);

	else
		return (0);

}
