#include "main.h"
/**
 * _strspn -shows length of a prefix substring
 * @s: string to be evaluated
 * @accept: string containing characters to match in s
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)

{

	int a, b, n, tmp;

	n = 0;

	for (a = 0; s[a] != '\0'; a++)

	{

		tmp = 0;

		for (b = 0; accept[b] != '\0'; b++)

		{

			if (s[a] == accept[b])

			{

				n++;

				tmp = 1;

			}

		}

		if (tmp == 0)

		{

			return (n);

		}

	}

	return (0);

}
