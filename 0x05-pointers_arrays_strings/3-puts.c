#include "main.h"

/**
 * _puts - prints string to standard output
 * @str: chat type string
 * Return: char array string type
 */

void _puts(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; str++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
