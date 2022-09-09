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
scanf("%d" &n);
if (n == 0) {
printf("%d zero\n", n); }
else if (n < 0) {
printf("%d negative\n", n); }
else {
printf("%d positive\n", n);
return (0);
}
