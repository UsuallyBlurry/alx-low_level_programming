#include <stdio.h>

/**
 * main - Prints all combinations of single digit numbers
 * Return: 0 always
 */

int main(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
	putchar(i + '0');
	putchar(',');
	putchar(' ');
	}
	putchar(i + '0');
	putchar('\n');
	return (0);
}
