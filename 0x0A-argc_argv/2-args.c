#include "main.h"

/**
 * main- prints the all of arguments passed
 * @argc: number of arguments
 * @argv: array of pointers to string arguements
 *
 * Return: always 0 for success
 */


int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
