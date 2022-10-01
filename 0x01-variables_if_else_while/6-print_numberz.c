#include <stdio.h>

/**
 * main - main block
 * Description: Print numbers in base 10 from 0 to 9
 * using only putchar twice and without the use of 
 * printf, puts, etc
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		putchar (c + '0');
	}
	putchar ('\n');
	return (0);
}
