#include "main.h"

/**
 * print_times_table - print multiplication table up to n
 * @n: integer
 */

void print_times_table(int n)
{
	int i;
	int j;
	int x;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				x = (i * j);
				if (j == 0)
					_putchar('0' + x);
				else
				{
					_putchar(',');
					_putchar(' ');
					if (x <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + x);
					}
					else if (x > 9 && x < 100)
					{
						_putchar(' ');
						_putchar('0' + (x / 10));
						_putchar('0' + (x % 10));
					}
					else if (x >= 100)
					{
						_putchar('0' + (x / 100));
						_putchar('0' + ((x / 10) % 10));
						_putchar('0' + (x % 10));
					}
				}
			}
			_putchar('\n');
		}
	}
}
