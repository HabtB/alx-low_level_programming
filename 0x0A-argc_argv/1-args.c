#include "main.h"

/**
 * main- prints the number of arguments passed
 * @argc: number of arguments
 * @argv: array of pointers to string arguements
 *
 * Return: always 0 for success
 */


int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void) argv;

	return (0);
}
