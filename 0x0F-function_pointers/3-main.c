#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point. Calculates the result of an arithmetic operation
 *        between two integers.
 *
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
char *operator;
int (*op_func)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

num1 = atoi(argv[1]);
operator = argv[2];
num2 = atoi(argv[3]);


op_func = get_op_func(operator);

if (op_func == NULL)
{
printf("Error\n");
exit(99);
}

result = op_func(num1, num2);
printf("%d\n", result);
return (0);
}
