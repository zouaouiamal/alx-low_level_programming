#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the  alphabet in lowercase
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int i = 0;
int j = 0;
while (j < 10)
{
i = 0;
while (i < 26)
{
_putchar('a' + i);
i++;
}
_putchar('\n');
j++;
}
}
