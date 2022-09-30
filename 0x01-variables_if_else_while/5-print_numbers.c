#include <stdio.h>

/**
 * main - main entry
 * Description: Prints numbers in base 10
 * Return: 0
 */
int main(void)
{
	int c;

	c = 0;
	while (c <= 10)
	{
		putchar (c);
		c++;
	}
	putchar('\n');
	return (0);
}
