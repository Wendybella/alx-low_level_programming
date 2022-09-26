#include "main.h"
/**
 * print_chessboard - Prints a chessboard
 * @a: The chessboard to be printed
 */

void print_chessboard(char (*a)[8])

{

	int tmp1, tmp2;

	for (tmp1 = 0; a[tmp1][7]; tmp1++)

	{

		for (tmp2 = 0; tmp2 < 8; tmp2++)

			_putchar(a[tmp1][tmp2]);

		_putchar('\n');

	}

}
