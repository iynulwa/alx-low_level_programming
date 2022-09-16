#include "main.h"

/**
 * print_numbers _ entry point
 *
 * Description: prints number with _putchar
 *
 * Return: void
 */

void print_number(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		_putchar(number);
	}
	_putchar('\n');
}
