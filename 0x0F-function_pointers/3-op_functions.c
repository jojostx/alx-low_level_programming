#include "3-calc.h"

/**
 * op_add - calculates the sum of two numbers
 * @a: augend
 * @b: addend
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference of two numbers
 * @a: minuend
 * @b: subtrahend
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates the product of two factors
 * @a: first multiplicand
 * @b: second multiplicand
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates the quotient of two numbers
 * @a: dividend
 * @b: divisor
 *
 * Return: quotient of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculates the remainder of the modulation of two numbers
 * @a: dividend
 * @b: divisor
 *
 * Return: remainder of the modulation of a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
