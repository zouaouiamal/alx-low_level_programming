#include "main.h"
/**
* _strlength - return the length of a string
* @s:string
* Return:length of s
*/

int _strlength(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlength(s + 1));
}

/**
* _check_pali - check if a sting is a palindrome
* @s:string
* @i: staring index
* @j:ending index
* Return: 1 if s is a palindrome, 0 Otherwise
*/

int _check_pali(char *s, int i, int j)
{
if (i >= j)
{
return (1);
}
if (s[i] != s[j])
{
return (0);
}
return (_check_pali(s, i + 1, j - 1));
}

/**
* is_palindrome - checks if a string is palindrome
* @s: string
* Return: 1 if s is a palindrome, 0otherwise
*/

int is_palindrome(char *s)
{
int l = _strlength(s);
if (l <= 1)
{
return (1);
}
return (_check_pali(s, 0, l - 1));
}
