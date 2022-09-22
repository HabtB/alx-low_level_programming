#include "main.h"

/**
 * leet- translates a string into leet
 * @s: is a pointer to a string
 *
 * Return: returns a char
 */

char *leet(char *s)
{

int i, j;

char letters[] = "aAeEoOtTlL";
char leet_it[] = "4433007711";


for (i = 0; s[i] != '\0'; i++)
for (j = 0; j < 10; j++)

if (s[i] == letters[j])
s[i] = leet_it[j];

return (s);
}
