#include <stdio.h>

/**
 * main - main block
 * Description: Print different combo of two digits
 * combos like 21 and 12 are considered the same
 *
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	i = 0;
	while (i < 100)
	{
		j = i / 10;
		k = i % 10;
		
		if (k < j)
		{
			putchar (j + '0');
			putchar (k + '0');

			if (i < 89)
			{
				putchar (',');
				putchar (' ');
			}

			i++;
		
		}
		putchar ('\n');
	}
	return (0);
}
