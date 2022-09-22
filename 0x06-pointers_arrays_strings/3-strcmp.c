#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: char string
 * @s2: char string
 * Return: negative int if s1 < s2, o if matching, positive int if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int n;

	for(n = 0; s1[n] != '\0' || s2[n] != '\0'; i++)
	{
		if (s1[n] != s2[n])
			return (s1[n] - s2[n]);
	}
	return (0);
}
