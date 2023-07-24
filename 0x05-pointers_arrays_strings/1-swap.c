#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: integer to swap
 * @b: integer to swap
 * Return: swapped values of a and b
 */

void swap_int(int *a, int *b)
	{
		int m;

		m = *a;
		*a = *b;
		*b = m;
	}
