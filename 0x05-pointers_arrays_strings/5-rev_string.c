#include "main.h"
#include <stdio.h>

/**
 * rev_string - prints a reversed string
 * @s: pointer to the string to print
 * Return: void
*/

void rev_string(char *s)
{
int l, i, half;
char temp;
for (l = 0; s[l] != '\0'; l++)
;
i = 0;
half = l / 2;
while (half--)
{
temp = s[l - i - 1];
s[l - i - 1] = s[i];
s[i] = temp;
i++;
}
}
