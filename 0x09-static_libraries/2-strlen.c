#include "main.h"

/**
 * _strlen - return length of string
 * @s: length_of_string
 * Return: length of @s
 */
int _strlen(char *s)
{
int length_of_string;
(length_of_string = 0);
while (*s++)
length_of_string++;
return (length_of_string);
}
