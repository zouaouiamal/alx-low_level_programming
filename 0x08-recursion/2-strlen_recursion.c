#include "main.h"
/**
* _strlen_recursion - returns the length of a string
*
*@s: the string to get the length of
* Return:the length of the string
*/

int _strlen_recursion(char *s)
{
int n = 0;
if (*s != '\0')
{
n = _strlen_recursion(s + 1);
n++;
}

return (n);
}
