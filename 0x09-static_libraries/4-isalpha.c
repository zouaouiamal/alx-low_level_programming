 #include "main.h"

/**
* _isalpha - checks if a letter  is lowercase or uppercase
* @c: the character to check
*
* Return: 1 if c is lowercase or uppercase, 0 otherwise
*/
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65  && c <= 98))
{
return (1);
}
else
{
return (0);
}
}
