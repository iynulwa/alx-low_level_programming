#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array of integers
 * @a: pointer to array
 * @n: number of elements in array
 * @i: int type variable
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf ("%d, ", a[i]);
	}
}
