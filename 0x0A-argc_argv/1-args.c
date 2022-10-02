#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of argument passed in
 * the command prompt
 * @argc: Argument count
 * @argv: Pointer to string
 *
 * Return 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("argc = %d\n", argc);

	return (0);
}
