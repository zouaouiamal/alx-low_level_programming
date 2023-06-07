#include "main.h"
/**
* is_prime - check if a number is prime
* @n: the number to check
* @d:int
* Return: 1 if n is prime,otherwise 0
*/

int is_prime(int n, int d)
{
if (n <= 1)
{
return (0);
}
if (d == n - 1)
{
return (1);
}
if (n % d == 0)
{
return (0);
}
return (is_prime(n, d + 1));
}

/**
* is_prime_number -returns 1 if the input integer is a prime number
* @n:int
* Return:int
*/

int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (is_prime(n, 2));
}

