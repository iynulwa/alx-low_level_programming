#include "main.h"

/**
 * swap_int - Interchanging pointer values
 * @a: int type pointer
 * @b: int type pointer
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
