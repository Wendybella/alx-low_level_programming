#include "main.h"
/**
 * _pow_recursion - returns the value x
 * raised to the value y
 * @y: raised power
 * @x: number
 * Return: value raised to power
 */
int _pow_recursion(int x, int y)
{
if (y > 0)
return (_pow_recursion(x, y - 1));
else if (y == 0)
return (1);
else
return (-1);
}
