#include "main.h"

/**
 * string_toupper- reverses the array
 * @s: is a pointer to a string
 *
 * Return: returns a char
 */

char *string_toupper(char *s)
{

int i = 0;

while (s[i] != '\0')
{
if (s[i] > 96 && s[i] < 123)
s[i] -= 32;
i++;
}
return (s);

}
