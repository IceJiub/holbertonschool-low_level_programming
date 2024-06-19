#include "main.h"
/**
 * _abs - Compute the absolute value of an integer
 *
 * @n: The value to check
 *
 * Return: Unsigned n
 */
int _abs(int n)
{
	if (n == 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
	{
		return (n);
	}
}
