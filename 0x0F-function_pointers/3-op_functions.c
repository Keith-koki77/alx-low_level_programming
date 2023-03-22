#include "3-calc.h"

/**
 * op_add - calculates the sum of @x and @y.
 * @x: first operand.
 * @y: second operand.
 *
 * Return: sum of @x and @y
 */
int op_add(int x, int y)
{
	return (x + y);
}

/**
 * op_sub - calculates the diffrence btn @x and @y.
 * @x: first operand.
 * @y: second operand.
 *
 * Return: difference between  @x and @y
 */

int op_sub(int x, int y)
{
	return (x - y);
}

/**
 * op_mul - calculates the product of @x and @y.
 * @x: first operand.
 * @y: second operand.
 *
 * Return: product of @x and @y
 */

int op_mul(int x, int y)
{
	return (x * y);
}

/**
 * op_div - calculates the quotient between dividend  @x and divisor @y.
 * @x: first operand.
 * @y: second operand.
 *
 * Return: quotient  @x and @y
 */

int op_div(int x, int y)
{
	if (y == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (x / y);
}

/**
 * op_mod - calculates the remainder of a division.
 * @x: first operand.
 * @y: second operand.
 *
 * Return: remainder between the division of @x and @y
 */

int op_mod(int x, int y)
{
	if (y == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (x % y);
}
