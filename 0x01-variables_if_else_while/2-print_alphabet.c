#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 * Return: 0 always
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
