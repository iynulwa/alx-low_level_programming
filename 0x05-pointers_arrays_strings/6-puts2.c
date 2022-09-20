#include "main.h"

/**
 * puts2 - prints one out of two char in a string
 * @str: char type string
 * Return: char arr string type
 */

void puts2(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		if (n % 2 == 0)
			_putchar(str[n]);
	}
	_putchar('\n');
}
