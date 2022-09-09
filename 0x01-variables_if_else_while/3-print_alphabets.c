#include <stdio.h>
/**
 * main - show lowercases then uppercase alphabet
 * print lowercase then uppercases alphabet
 * Return: 0 normally
 */
int main(void)
{
int a, B;
a = 97;
B = 65;
while (a < 123)
{
putchar (a);
a++;
}
while (B < 91)
{
putchar (B);
B++;
}
putchar (10);
return (0);
}
