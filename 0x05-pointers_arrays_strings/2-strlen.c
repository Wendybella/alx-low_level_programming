#include "main.h"
/**
 * int _strlen - length of string
 * @_strlen: length_of_string
 * return: length of @_strlen
 */
int _strlen(char *s)
{
int length_of_string = 0;
while (*s++)
(length_of_string++);
return (length_of_string);
}
