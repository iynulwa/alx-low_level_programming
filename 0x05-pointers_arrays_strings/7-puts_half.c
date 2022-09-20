#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: char type string
 * Return: Other half of string.
 */

void puts_half(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
		;

	n++;
	for (i /= 2; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
