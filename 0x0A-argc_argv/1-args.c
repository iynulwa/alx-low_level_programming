#include <stdio.h>
#include "main.h"

/**
 * main - prints the numer of argument given to the program
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
