#include "main.h"
/**
 *puts2 - prints character of string
 *followed by a new line
 *@str: string parameter
 */
void puts2(char *str)
{
int a, b;
a = 0;
while (str[a] != '\0')
{
a++;
}
for (b = 0; b < a; b += 2)
{
_putchar (str[a]);
}
_putchar ('\n');
}
