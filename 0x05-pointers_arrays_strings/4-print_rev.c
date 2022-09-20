#include "main.h"
/**
 * print_rev - prints reverse
 * followed by a new line
 * @s: printed string
 */
void print_rev(char *s)
{
int n;
int p;
int tmp;
n = 0;
while (s[n] != '\0')
{
n++;
}
tmp = n;
for (p = tmp - 1; p >= 0; p--)
{
_putchar(s[p]);
}
_putchar('\n');
}
