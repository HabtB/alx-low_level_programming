#include "main.h"

/**
 * cap_string- capitalizes words
 * @s: is a pointer to a string
 *
 * Return: returns a char
 */

char *cap_string(char *s)
{

int i = 0;

if (s[i] > 96 && s[i] < 123)
s[i] -= 32;

while (s[i] != '\0')
{
switch (s[i])
{
case ' ': case '\n': case '\t': case ',': case '.': case '!':
case '?': case '"': case '(': case ')': case '{': case '}':
if (s[i + 1] > 96 && s[i + 1] < 123)
s[i + 1] -= 32;

}
i++;

}
return (s);

}
