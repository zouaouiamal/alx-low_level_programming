#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 0;
while (i < 26)
{
putchar('a' + i);
i++;
}
i = 0;
while (i < 26)
{
putchar('A' + i);
i++;
}
putchar('\n');
return (0);
}
