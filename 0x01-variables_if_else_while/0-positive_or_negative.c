#include <stdio.h>
/**
 * main - entry point
 * might be negative or postive
 * Return: always 0 (success)
 */
int main(void) 
{
int n;
printf("value of n");
if (n == 0) 
printf("%d zero", n);
else if (n < 0)
printf("%d negative", n);
else
printf("%d positive", n);
return (0);
}
