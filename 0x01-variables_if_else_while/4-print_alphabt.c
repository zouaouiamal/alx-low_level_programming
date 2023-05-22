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
if (i != 4 && i != 16)
{
putchar('a' + i);
}
i++;
}
putchar('\n');
return (0);
}
