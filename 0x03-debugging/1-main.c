#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
	int i;
	printf("Infinite loop incoming :(\n");

	i = 0;
	while (i < 10)
	{
		putchar(i);
	}
/* the loop will keep running since 0 < 10 and there is no increment*/
	printf("Infinte loop avoided! \\o/\n");

	return (0);
}

