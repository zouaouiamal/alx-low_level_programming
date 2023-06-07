#include "main.h"
/**
* check_sqrt - recursively finds the square root of a number using a x
* @n:int
* @x:int
* Return:int
*/

int check_sqrt(int n, int x)
{

if (x * x == n)
{
return (x);
}
else if (x * x > n)
{
return (-1);
}
else
{
return (check_sqrt(n, x + 1));
}
}

/**
* _sqrt_recursion - the natural square root of a number
* @n:int
* Return:int
*/
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else
{
return (check_sqrt(n, 0));
}
}
