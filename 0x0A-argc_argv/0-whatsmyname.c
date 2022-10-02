#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the file
 * @argc: agrument count
 * @argv: pointer to string of supplied arguments
 *
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
