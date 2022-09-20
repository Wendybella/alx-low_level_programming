#include "main.h"
/**
 * print_rev - prints reverse
 * followed by a new line
 * @s: printed string
 */
void print_rev(char *s)
{
int n = 0, z;
while (s[z++])
{
n++;
}
for (z = n - 1; z >= 0; z--)
{
_putchar(s[z]);
}
_putchar('\n');
}
