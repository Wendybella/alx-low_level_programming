#include "main.h"
/**
 * rev_string - reverse string
 * @s: the reverse string to be printed
 */
void rev_string(char *s)
{
int a;
char b;
int c;
int tmp;
tmp = 0;
c = 0;
while (s[c] != '\0')
{
c++;
}
tmp = c - 1;
for (a = 0; a < c / 2; a--)
{
b = s[a];
s[a] = s[tmp];
s[tmp] = c;
}
}
