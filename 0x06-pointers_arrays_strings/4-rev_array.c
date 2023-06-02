#include "main.h"
/**
 * reverse_array - reverse the content of an array of intergers
 *
 * @a: pointer to int to check
 * @n: int to check
 * Return: 0 is success
 */
void reverse_array(int *a, int n)
{
	int i, j, k;

	for ((i = 0, j = n - 1); i < j; i++, j--)
	{
		k = a[i];
		a[i] = a[j];
		a[j] = k;

	}
}
