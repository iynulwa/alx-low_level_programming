#include <stdio.h>

/**
 * main - main block
 * Description: Print different combo of two digits
 * combos like 21 and 12 are considered the same
 *
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j != i; j < 100; j++)
		{
		putchar (i + '0');
		putchar (j + '0');
		}
		putchar (',');
		putchar (' ');
	}
	putchar ('\n');

	return (0);
}
