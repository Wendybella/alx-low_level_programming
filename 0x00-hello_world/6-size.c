#include <stdio.h>
/**
 * main-print the size of various types
 * it runs on computer
 * Return: 0 always.
 */
int main(void)
{
printf("Size of a char: %zu byte(s)\n", sizeof(char));
printf("Size of a: off_t %zu byte(s)\n", sizeof(off_t));
printf("Size of a long: %zu byte(s)\n", sizeof(long));
printf("Size of a int: %zu byte(s)\n", sizeof(int));
printf("Size of float: %zu bytes\n", sizeof(float));
printf("Size of short: %zu byte(s)\n", sizeof(short));
return (0);
}
