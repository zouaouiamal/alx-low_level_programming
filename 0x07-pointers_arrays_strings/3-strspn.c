#include "main.h"
/**
 * _strspn - get the length of a prefix substring
 *
 * @accept: pointer to get the bytes
 * @s: pointer to string char type
 *
 * Return: number of bytes in s which are from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				i++;
				break;
			}

			else if (accept[j + 1] == '\0')
				return (i);
		}

		s++;
	}

	return (i);
}
