#include <stdio.h>
/**
 * main - prints all arguments received.
 * @argv: array of arguments
 * @argc: number of arguments.
 * Return: 0 succes
 */
int main(int argc, char *argv[])
{
int j;
for (j = 0; j < argc; j++)
{
printf("%s\n", argv[j]);
}
return (0);
}
