#include <stdio.h>

/**
 * main - main block
 * Description: prints alphabet in uppercase and lowercase
 * Return: 0
 */
int main(void)
{
	char x;

	x = 'a';

	while (x <= 'z')
	{
		putchar (x);
		x++;
	}
	x = 'A';

	while (x <= 'Z')
	{
		putchar (x);
		x++;
	}
	putchar ('\n');
	return (0);
}
