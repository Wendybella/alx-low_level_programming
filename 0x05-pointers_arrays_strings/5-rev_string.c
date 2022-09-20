#include "main.h"
/**
 * rev_string - reverse string
 * @s: the reverse string to be printed
 */
void rev_string(char *s)
{
int a;
char b;
int tmp1;
int tmp;
tmp = 0;
tmp1 = 0;
while (s[tmp] != '\0')
{
tmp++;
}
tmp1 = tmp - 1;
for (a = 0; a < tmp1 / 2; a++)
{
b = s[a];
s[a] = s[tmp1];
s[tmp1] = b;
}
}
