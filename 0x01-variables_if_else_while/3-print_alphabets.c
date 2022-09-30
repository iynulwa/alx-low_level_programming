#include <stdio.h>

/**
 * main - main block
 * Description: prints alphabet in uppercase and lowercase
 * Return: 0
 */
int main(void)
{
	char x, Y;
	x = 'a';
	Y = 'A';

	while (x <= 'z')
	{
		putchar (x);
		x++;
	}
	while (Y <= 'Z')
		putchar (Y);
		Y++;
	}
	putchar ('\n');
	return (0);
}
