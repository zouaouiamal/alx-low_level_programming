#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if invalid input.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int idx = 0;

	if (b == NULL)
		return (0);

	while (b[idx] != '\0')
	{
		if (b[idx] != '0' && b[idx] != '1')
			return (0);

		result = result * 2 + (b[idx] - '0');
		idx++;
	}

	return (result);
}
