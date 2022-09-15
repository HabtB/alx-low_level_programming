#include "main.h"
/**
 * _isupper- changes all the alphabets into lower case
 *@c : integer value
 * Return: always returns zero
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
