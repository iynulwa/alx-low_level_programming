#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string
 * @srt: string
 * @n: number of element to concatenate in
 *
 * Return: pointer to resulting string `dest`
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[c] != '\0' && c < n)
	{
		dest[i] = src[c];
		i++;
		c++;
	}

	dest[i] = '\0';

	return (dest);
}
