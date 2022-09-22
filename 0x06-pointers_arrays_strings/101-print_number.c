#include "main.h"

void print_vint(unsigned int n);

/**
 * print_number - print an integer
 * @n: The integer to print
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	print_unit((unsigned int) n);
}

/**
 * print_unit - prints an unsigned integer
 * @n: The unsigned int to print
 */
void print_unit(unsigned int n)
{
	if (n / 10 != 0)
		print_unit(n / 10);
	_putchar(n % 10 + '0');
}
