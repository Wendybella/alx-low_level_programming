#include "main.h"
/**
 * _puts - prints a string
 * followed by a new line
 * @str: will be printed
 */
void _puts(char *str)
{
while (*str)
{
putchar (*str++);
putchar ('\n');
}
}
