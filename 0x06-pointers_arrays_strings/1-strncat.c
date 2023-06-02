#include "main.h"
/**
 * *_strncat - appends the src string to the dest string
 *
 * @dest: char to check
 * @src: char to check
 * @n: number of bytes from src
 * Description: This will append the src string to the dest string
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;
while (dest[i++])
j++;
for (i = 0; src[i] && i < n; i++)
dest[j++] = src[i];
return (dest);
}
