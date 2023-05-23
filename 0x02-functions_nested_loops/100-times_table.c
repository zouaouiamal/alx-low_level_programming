#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The number for which the times table is printed
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	int i, j, result;

	for (i = 0; i <= n; i++)
	{
		_putchar('0');

		for (j = 1; j <= n; j++)
		{
			_putchar(',');
			_putchar(' ');

			result = i * j;

			if (result < 10)
				_putchar(' ');
			if (result < 100)
				_putchar(' ');

			if (result >= 100)
			{
				_putchar(result / 100 + '0');
				_putchar((result / 10) % 10 + '0');
			}
			else if (result >= 10)
			{
				_putchar(result / 10 + '0');
			}

			_putchar(result % 10 + '0');
		}

		_putchar('\n');
	}
}
