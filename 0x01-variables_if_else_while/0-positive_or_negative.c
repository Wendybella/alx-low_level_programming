#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main-entry point
 * might be negative or postive,i choose postive
 * Return: 0 (printed successfully)
 */
int main(void)
{
int n;
if (n > 0)
printf("%d is postive\n",n);
else if (n==0)
printf("%d is Zero\n",n);
else
printf("%d is negative\n",n);
return 0;
}
