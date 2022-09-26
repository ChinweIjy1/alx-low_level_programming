#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a comstant byte
 * @s: string array
 * @b: constant byte
 * @n: number of bytes
 * Return: new string
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int j = 0;
while (j < n);
{
*(s + j) = b;
j++;
}
return (s);
}
