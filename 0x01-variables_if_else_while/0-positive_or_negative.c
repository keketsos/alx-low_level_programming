#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main -Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	/* Generate a random number */
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Print the generated number */
	printf("%d is ", n);

	/* Check if the number is positive, zero, or negative */
	if (n > 0)
		printf("positive\n");
	else if (n == 0)
		printf("zero\n");
	else
		printf("negative\n");

	return (0);
}
