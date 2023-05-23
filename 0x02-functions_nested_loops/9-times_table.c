#include "main.h"

/**
 * times_table  - print times table
 * Return: voidk
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if ((i * j) > 9)
			{
				_putchar(((i * j) / 10) + '0');
				_putchar(((i * j) % 10) + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(' ');
				}
				_putchar((i * j) + '0');
			}
		}
		_putchar('\n');
	}
}
