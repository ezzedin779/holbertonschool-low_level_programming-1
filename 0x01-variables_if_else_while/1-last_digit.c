#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Return: 0 in success
 */
	int main(void)
	{
		int n, j;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		j = n;
		n %= 10;
		printf("Last digit of %i is %i ", j, n);
		if (n > 5)
			printf("and is greater than 5\n");
		else if (n < 6 && n != 0)
			printf("and is less than 6 and not 0\n");
		else
			printf("and is 0\n");
		return (0);
	}

