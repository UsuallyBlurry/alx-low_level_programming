#include "main.h"

/**
 * positive_or_negative - tells sign of a number i
 * int i - a given integer
 * Return: void
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
	printf("%d is positive\n", i);
	}
	else
	{
	if (i == 0)
	{
	printf("%d is zero\n", i);
	}
	else
	{
	printf("%d is negative\n", i);
	}
	}
}

