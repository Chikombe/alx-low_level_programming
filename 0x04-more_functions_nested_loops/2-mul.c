#include "main.h"
/**
 * mul - multiply two integers
 * @a: first integer
 * @b: second integer
 * Return: a*b or 0
 *
 */
int mul(int a, int b)
{
	if ((a >= 0 || a < 0) && (b >= 0 || b > 0))
		return (a * b);
	else
		return (0);
}
