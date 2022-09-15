#include <stdio.h>

/**
 * main- prints fizz buzz.
 *
 * Return: 0.
*/

int main(void)
{
	int j = 1;

	while (j <= 100)
	{
		if (j < 3)
			printf("%d", j);
		else if ((j % 3 == 0) && (j % 5 == 0))
			printf("FizzBuzz");

		else if (j % 3 == 0)
			printf("Fizz");

		else if (j % 5 == 0)
			printf("Buzz");

		else
			printf("%d", j);

		if (j < 100)
			printf(" ");
		j++;
	}
	printf("\n");
	return (0);
}

