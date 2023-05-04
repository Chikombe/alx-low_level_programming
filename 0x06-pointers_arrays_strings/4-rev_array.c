#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: the array
 * @n: the number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
