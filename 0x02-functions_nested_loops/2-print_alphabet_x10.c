#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * in lowercase
 */
void print_alphabet_x10(void)
{
int a = 0;
while (a < 10)
{
char n = 'a';
char s = 'z';
while (n <= s)
{_putchar(n);
n++;
}
_putchar('\n');
a++;
}
}
