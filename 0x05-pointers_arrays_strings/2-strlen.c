#include "main.h"

/**
 * _strlen - counts number of character in string
 *@s: char type string
 *Return: lenth of string
 */

int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
		n++;
	return (n);
}
