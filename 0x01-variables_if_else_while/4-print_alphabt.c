#include <stdio.h>

/**
 * main - Prints lowecaser alphabet except letters e and q
 * Return: 0 always
 */

int main() {
    char ch;

    for (ch = 'a'; ch <= 'z'; ch++) {
        if (ch != 'e' && ch != 'q') {
            putchar(ch);
        }
    }

    putchar('\n');

    return 0;
}

