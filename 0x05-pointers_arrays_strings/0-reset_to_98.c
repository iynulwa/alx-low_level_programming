#include "main.h"

/**
 * reset_to_98 - entry point
 *
 * Description: Changes the value of a variable using a pointer
 *
 * Return: Always 0
 */

void return_to_98(int *n)
{
	int n;
	int p;

	n = 402;
	p = &n;

	putchar(n);
	*p = 98
	putchar(n);

	return (0);
}
