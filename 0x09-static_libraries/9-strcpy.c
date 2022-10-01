#include "main.h"
/**
 * _strcpy - cpoies string pointed to by src
 * @dest: pointer to the buffer
 * @src: to be copied string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int a, j;
a = 0;
while (src[a] != '\0')
{
a++;
}
for (j = 0; j < a; j++)
{
dest[j] = src[j];
}
dest[j] = '\0';
return (dest);
}
