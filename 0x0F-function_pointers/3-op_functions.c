#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: integer value
 * @b: integer value
 *
 * Return: the sum
 */

int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - subtracts two numbers
 * @a: first value
 * @b: second int value
 *
 * Return: the difference
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: first int
 * @b: second int
 *
 * Return: the products
 */

int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: first number
 * @b: second number
 *
 * Return: retuns the quotient
 */

int op_div(int a, int b)
{
return (a / b);
}

/**
 * op_mod - calculates the modulo
 * @a: dividend
 * @b: divisor
 *
 * Return: the remainder
 */

int op_mod(int a, int b)
{
return (a % b);
}
