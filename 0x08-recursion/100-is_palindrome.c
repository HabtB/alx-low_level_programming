#include "main.h"

/**
 * stringlength- returns the length of the string
 * @s: pointer to a string input
 *
 * Return: the number of chars in the string
 */

int stringlength(char *s)
{
if (*s != '\0')
return (1 + stringlength(s + 1));

else
return (0);
}

/**
 * palindrome-checks if chars at the start and end
 * of a string match
 * @s: character array
 * @start: the start of the character array
 * @end: end of the character array
 *
 * Return: returns if the string is a palindrome
 */


int palindrome(char s[], int start, int end)
{
if (start >= end)
return (1);

if (s[start] != s[end])
return (0);

if (start <= end || start <= end + 1)
return (palindrome(s, start + 1, end - 1));

return (1);
}

/**
 * is_palindrome- checks weather a given string is
 * palindrome or not
 * @s: is the pointer to a string
 *
 * Return: returns 1 if it is a palindrom and 0 otherwise
 */


int is_palindrome(char *s)
{
int length;

length = stringlength(s);

if (length == 0)
return (1);

return (palindrome(s, 0, length - 1));
}
