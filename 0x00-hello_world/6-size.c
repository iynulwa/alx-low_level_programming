#include<stdio.h>

/**
 * *main - Entry point
 *
 * *Return 0 (Success)
 *
 */

int main(void)
{

	char a;
	int b;
	long int c;
	long long int d;
	float e;
	printf("Size of char=%c bytes\n",sizeof(a));
	printf("Size of int=%d bytes\n",sizeof(b));
	printf("Size of long int=%ld\n",sizeof(c));
	printf("Size of long long int=%lld\n",sizeof(d));
	printf("Size of float=%f\n",sizeof(e));

	return (0);

}
