#include "main.h"
/**
 * strcat - concatenates two strings
 * followed by a character null
 * @src: string to be apended to @dest
 * @dest: string to be concatenated
 * Return: pointer to @dest success
 */
char *strcat(char *dest, const char *src)
{
int tmp = 0, dest_var = 0;
while (dest[tmp++])
{
dest_var++;
}
for (tmp = 0; src[tmp]; tmp++)
{
dest[dest_var++] = src[tmp];
}
return (dest);
}
