#include "main.h"
#include "stdlib.h"
/**
 * *malloc_checked - alloctes memory using malloc
 *  @b: bytes to be allocated.
 *  Return: pointer (success).
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr != NULL)
{
return (ptr);
}
else
{
exit(98);
}
}
