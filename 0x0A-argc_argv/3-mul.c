#include <stdlib.h>
#include <stdio.h>
/**
 * main - Prints the multiplication of two numbers
 * @argc: The number of arguments
 * @argv: An array of arguments.
 * Return: If the program receives two arguments - 0.
 * if the program does not receive two arguments - 1.
 */

int main(int argc, char *argv[])

{

	int x, y, lens;

	if (argc != 3)

	{

		printf("Error\n");

		return (1);

	}

	x = atoi(argv[1]);

	y = atoi(argv[2]);

	lens = x * y;

	printf("%d\n", lens);

	return (0);

}
