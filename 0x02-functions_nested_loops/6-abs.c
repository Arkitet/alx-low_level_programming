#include "main.h"

/**
 * _abs - inputs the absolute value
 * @c: The numer to be inputed
 *
 * Return: Absolute value of number
 */

int _abs(int c)

{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
