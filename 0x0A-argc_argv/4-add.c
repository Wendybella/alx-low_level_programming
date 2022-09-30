#include <stdio.h>

#include <stdlib.h>

/**
 * main - Prints the addition of positive numbers,
 * followed by a new line.
 * @argc: The number of arguments
 * @argv: An array of arguments.
 * Return: If one of the numbers contains symbols that are non-digits - 1.
 * else - 0.
 */

int main(int argc, char *argv[])

{

	int x;

	int digit;

	int sum = 0;

	for (x = 1; x < argc; x++)

	{

		for (digit = 0; argv[x][digit]; digit++)

		{

			if (argv[x][digit] < '0' || argv[x][digit] > '9')

			{

				printf("Error\n");

				return (1);

			}

		}

		sum += atoi(argv[x]);

	}

	printf("%d\n", sum);

	return (0);

}
