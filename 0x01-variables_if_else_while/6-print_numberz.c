#include <stdio.h>

/**
 * main - main entry
 * Description: Print numbers in base 10 from 0 to 9
 * Return 0
 */
int main(void)
{
	int c;

	c = 0;
	while (c < 9)
	{
		putchar (c);
		c++;
	}
	putchar ('\n');
	return (0);
}
