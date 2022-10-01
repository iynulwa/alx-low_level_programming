#include <stdio.h>

/**
 * main - main block
 * Description: print lowercase letters in reverse from z -a
 *
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar (c);
	}
	putchar ('\n');
	return (0);
}
