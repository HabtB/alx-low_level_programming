#include "main.h"

/**
 * main - converts the amount given into smallest possible coins
 * @argc: an int that contains the number of character arrays
 * @argv: a pointer to arrays of pointers of characters
 *
 * Return: always returns zero
*/

int main(int argc, char **argv)
{
	int coins = 0;
	int amount = atoi(argv[1]);

	if (argc == 1)
		printf("%s\n", "Error");

	if (amount >= 25)
	{
		coins += amount / 25;
		amount %= 25;
	}
	if (amount >= 10)
	{
		coins += amount / 10;
		amount %= 10;
	}
	if (amount >= 5)
	{
		coins += amount / 5;
		amount %= 5;
	}
	if (amount >= 2)
	{
		coins += amount / 2;
		amount %= 2;
	}

	coins += amount;
	printf("%d\n", coins);
	return (0);
}
