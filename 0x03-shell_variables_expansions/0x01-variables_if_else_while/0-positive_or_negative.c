#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(NULL));
	n = rand();

	printf("Last digit of %d is %d ", n, abs(n % 10));

	if (abs(n % 10) > 5)
		printf("and is greater than 5\n");
	else if (abs(n % 10) == 0)
		printf("and is 0\n");
	else
		printf("and is less than 6 and not 0\n");

	return (0);
}
