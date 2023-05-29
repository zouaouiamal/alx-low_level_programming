#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords
 * Return: 0
 */
int main(void)
{
	int sum;
	char p;

	srand(time(NULL));
	while (sum <= 2645)
	{
		p = rand() % 128;
		sum += p;
		putchar(p);
	}
	putchar(2772 - sum);
	return (0);
}
