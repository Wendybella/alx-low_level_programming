#include <stdio.h>
/**
 * main - show lowercases then uppercase alphabet
 * print lowercase then uppercases alphabet
 * Return: 0 normally
 */
int main(void)
{
int a = 97; , b =65;
while ( a < 123)
{
putchar (a);
a++;
}
while (b < 91)
{
putchar (b);
b++;
}
putchar (10);
return (0);
}
