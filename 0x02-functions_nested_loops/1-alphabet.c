#include "main.h"
/**
 * print alphabet in lowercase using only 'putchar'
 * Return: 0
 */
void print_alpahbet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
