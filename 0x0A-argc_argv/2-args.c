#include <stdio.h>
#include "main.h"

/**
 * main - prints all argument it receives
 * @argc: Number of argument
 * @argv: Argument array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}

