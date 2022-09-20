#include "main.h"
/**
 *puts2 - prints character of string
 *followed by a new line
 *@str: string parameter
 */
void puts2(char *str)
{
int j, i;
j = 0;
while (str[j] != '\0')
{
j++;
}
for (i = 0; i < j; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
