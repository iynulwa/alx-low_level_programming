#include "main.h"

/**
 * rev_string -  reverse a string
 * @length: int variable that stores the length of string
 * @i: int variable
 * @j: int variable that stores the reverse of the string in numbers
 * @temp: char variable
 * Return: void
 */
void rev_string(char *s)
{
	int length, i;

	for (length = 0; s[length] != '\0'; length++)
		;
	int j = length - 1;
	char temp;

	for (i = 0; i <= (length - 1) / 2; i++)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j--;
	}
}
