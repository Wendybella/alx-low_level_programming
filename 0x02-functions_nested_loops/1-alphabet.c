#include "main.h"
/**
 * print_alphabet - alphabet
 * in lowercase
 * Return: 0 always successful
 */
void print_alphabet(void)
{
char n = 'a';
char s = 'z';
while (n <= s)
{
_putchar(n);
n++;
}
_putchar('\n');
}
