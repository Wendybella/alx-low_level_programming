#include <stdio.h>
#include "main.h"
/**
 * print_array - prints arrays of integers
 * followed by a new line
 * @b:to be printed array
 * @n: number of element to be printed
 */
void print_array(int *b, int n)
{
int j;
for (j = 0; j < n; j++)
{
if (j == 0)
{
printf("%d", b[j]);
}
else
{
printf(", %d", b[j]);
}
}
printf("\n");
}
