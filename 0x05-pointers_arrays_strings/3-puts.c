#include "main.h"

/**
 * _puts: - prints a string follwed by a new line
 * @str: point to the string and print
 * Return: void
*/

void _puts(char *str)
{
int i = 0;
while (str[i])
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
