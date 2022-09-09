#include <stdio.h>
/**
 * main-print the size of various types
 * it runs on computer
 * Return: 0 always.
 */
int main(void)
{
printf("Size of an ptr: %zu byte(s)\n", sizeof(ptr));
printf("Size of a: off_t %zu byte(s)\n", sizeof(off_t));
printf("Size of a long: %zu byte(s)\n", sizeof(long));
printf("Size of a int: %zu byte(s)\n", sizeof(int));
return (0);
}
