#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)

{

	int j;

	unsigned int sum, sum1;

	sum = 0;

	sum1 = 0;

	for (j = 0; j < size; j++)

	{

		sum += a[(size * j) + j];

		sum1 += a[(size * (j + 1)) - (j + 1)];

	}

	printf("%d, %d\n", sum, sum1);

}
