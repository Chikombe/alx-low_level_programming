#include "main.h"
/**
 * _isdigit - checks a digit from 0 through 9
 * @c: the digit
 * return: on success 1 else 0
 *
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
