#include "main.h"

/**
 * print_line - entry point 
 *
 * Description: prints lines
 *@n: number of lines
 *Return: void
 */

void print_line(int c)
{
	int num_lines;

	if (n >= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (num_lines = 1; num_lines <= n; num_lines++)
		{
			_putchar(' ');
		}
		_putchar('\n');
	}
}
