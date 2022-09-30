#include "main.h"

int convert2int(char *s);
int _strlen(char *s);
/**
 * main- prints the product of two arguments passed
 * @argc: number of arguments
 * @argv: array of pointers to string arguements
 *
 * Return: always 0 for success
 */


int main(int argc, char *argv[])
{
	int n1, n2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	if (*argv[1] == 48)
		n1 = 0;

	else
		n1 = convert2int(argv[1]);

	if (*argv[2] == 48)
	n2 = 0;

	else
		n2 = convert2int(argv[2]);

	mul = n1 * n2;
	printf("%d\n", mul);

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
