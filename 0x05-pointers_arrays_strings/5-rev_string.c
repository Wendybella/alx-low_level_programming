#include "main.h"
/**
 * rev_string - reverse string
 * @s: the reverse string to be printed
 */
void rev_string(char *s)
{
int i;
char c;
int var1;
int var;
var = 0;
var = 0;
while (s[var] != '\0')
{
var++;
}
var1 = var - 1;
for (i = 0; i < var / 2; i++)
{
c = s[i];
s[i] = s[var1];
s[var1--] = c;
}
}
