#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of argument passed to the program
 * @argc: Argument count
 * @argv: Array of argument
 *
 * Return 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
