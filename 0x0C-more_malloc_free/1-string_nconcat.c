#include "main.h"
#include "stdlib.h"
/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int i = 0, j = 0, tmp1 = 0, tmp2 = 0;
while (s1 && s1[tmp1])
tmp1++;
while (s2 && s2[tmp2])
tmp2++;
if (n < tmp2)
s = malloc(sizeof(char) * (tmp1 + n + 1));
else
s = malloc(sizeof(char) * (tmp1 + tmp2 + 1));
if (!s)
return (NULL);
while (i < tmp1)
{
s[i] = s1[i];
i++;
}
while (n < tmp2 && i < (tmp1 + n))
s[i++] = s2[j++];
while (n >= tmp2 && i < (tmp1 + tmp2))
s[i++] = s2[j++];
s[i] = '\0';
return (s);
}
