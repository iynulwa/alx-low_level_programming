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
	j = i / 10;
	k = i % 10;

	while (i < 100)
	{
		i = 0;
		if (j > k)
		{
			putchar (j + '0');
			putchar (k + '0');
		}
		putchar (',');
		putchar (' ');
		i++;
	}
	return (0);
}
