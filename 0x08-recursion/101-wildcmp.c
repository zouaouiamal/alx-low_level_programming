#include "main.h"
/**
* wildcmp - check if strings could be considered identical
*
* @s1:first string to be compared
* @s2:second string to be compared, can contain the special character
*
* Return:int
*/

int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
{
return (1);
}
if (*s2 == '*')
{
if (*(s2 + 1) == '*')
{
return (wildcmp(s1, s2 + 1));
}
else if (*s1 == '\0')
{
return (wildcmp(s1, s2 + 1));
}
else
{
return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
}
}
else if (*s1 == *s2 || *s2 == '?')
{
return (wildcmp(s1 + 1, s2 + 1));
}
else
{
return (0);
}
}
