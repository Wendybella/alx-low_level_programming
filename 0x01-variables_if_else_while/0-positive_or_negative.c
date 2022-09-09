#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - decides if number is positve or not
 *
 * a random number will be assigned to the variable n each time by the program
 * it is executed
 *
 * Return: always 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n == 0)
{
printf("%d is zero\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
}
printf("%d is positive\n", n);
}
return (0);
}
