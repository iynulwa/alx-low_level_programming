#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to reverse
 * @length: int variable
 * @i: int type variable
 * @j: int type variable
 * @temp: char type variable
 * Return: void
 */
void rev_string(char *s)
{
	int length, i, j;
	char temp;

	for (length = 0; s[length] != '\0'; length++)
		;
	j = length - 1;

	for (i = 0; i <= (length - 1) / 2; i++)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j--;
	}
}
