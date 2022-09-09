#include <stdlib.h>
#include <stdio.h>
#include <time.h>
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
printf("%d will be zero\n", n);
}
else if (n < 0)
{
printf("%d will be negative\n", n);
}
else
}
printf("%d will be positive\n", n);
}
return (0);
}
