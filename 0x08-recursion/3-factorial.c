#include "main.h"

/**
* factorial - returns factorial of certain number
* @n: number to return factorial from
*
* Return: factorial of number
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
