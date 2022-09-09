#include <stdio.h>
/**
 * main-print the size of various types
 * it runs on computer
 * Return: 0 always.
 */
int main(void)
{
printf("Size of a char: %zu byte(s)\n", sizeof(char));
printf("Size of an double: %zu byte(s)\n", sizeof(int));
printf("Size of a float: %zu byte(s)\n", sizeof(float));
printf("Size of a long: %zu byte(s)\n", sizeof(long));
printf("Size of a int: %zu byte(s)\n", sizeof(int));
printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
printf("Size of a unsigned long int: %zu byte(s)\n", sizeof(unsigned long int));
printf("Size of a long double: %zu byte(s)\n", sizeof(long double));
printf("Size of a short int: %zu byte(s)\n", sizeof(short int));
printf("Size of a unsigned int: %zu byte(s)\n", sizeof(unsigned int));
return (0);
}
