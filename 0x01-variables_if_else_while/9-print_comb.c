#include <stdio.h>

/**
 *
 * main -main block
 * Descrription: Prints all possible combination of single digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar (i + '0');
		if (i < 9)
		{
			putchar (',');
		}
			if ( i < 9)
			{
				putchar (' ');
			}
			putchar ('\n');
	}
	return (0);
}
