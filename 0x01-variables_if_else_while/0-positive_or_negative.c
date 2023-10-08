#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print if is it psitive or negativei.
 * Return: 0
**/

int main(void)
{
	int a;

	srand(time(0));
	a = rand() - RAND_MAX / 2;

	printf("%d", n);

	if (a > 0)
	{
		puts(" is positive");
	}
	else if (a == 0)
	{
		puts(" is zero");
	}
	else
	{
		puts(" is negative");
	}

	return (0);
}
