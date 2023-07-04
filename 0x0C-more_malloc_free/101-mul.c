#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - Checks if a character is a digit.
 * @c: The character to check.
 *
 * Return: 1 if the character is a digit, 0 otherwise.
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * allocate_array - Allocates an array of integers and initializes them to 0.
 * @size: The size of the array to allocate.
 *
 * Return: A pointer to the allocated array, or NULL on failure.
 */
int *allocate_array(int size)
{
	int *array;
	int i;

	array = malloc(sizeof(int) * size);
	if (array == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 0; i < size; i++)
		array[i] = 0;

	return (array);
}

/**
 * multiply - Multiplies two positive numbers.
 * @num1: The first number as a string.
 * @num2: The second number as a string.
 */
void multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, i, j;
	int *result;

	while (num1[len1])
		len1++;
	while (num2[len2])
		len2++;

	result = allocate_array(len1 + len2);

	for (i = len1 - 1; i >= 0; i--)
	{
		if (!_isdigit(num1[i]) || num1[i] == '-')
		{
			printf("Error\n");
			free(result);
			exit(98);
		}
		for (j = len2 - 1; j >= 0; j--)
		{
			if (!_isdigit(num2[j]) || num2[j] == '-')
			{
				printf("Error\n");
				free(result);
				exit(98);
			}
			result[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
			result[i + j] += result[i + j + 1] / 10;
			result[i + j + 1] %= 10;
		}
	}

	i = 0;
	while (i < len1 + len2 && result[i] == 0)
		i++;

	if (i == len1 + len2)
		printf("0");
	else
	{
		while (i < len1 + len2)
			printf("%d", result[i++]);
	}

	printf("\n");
	free(result);
}

/**
 * main - Entry point. Accepts two positive numbers as arguments and multiplies them.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	multiply(argv[1], argv[2]);

	return (0);
}
