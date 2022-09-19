#include "main.h"
#include <stdio.h>

/**
 * print_array - print 'n' elements of an array of integers
 * @a: int tpye array
 * @n: int type integers to be printed
 * Description: Numbers must be separated by a comma and
 * space stored in the order same with the array
*/

void print_array(int *a, int n)
{
int i;
i = 0;
for (n--; n >= 0; n--, i++)
{
printf("%d", a[i]);
if (n > 0)
{
printf(", ");
}
}
printf("\n");
}
