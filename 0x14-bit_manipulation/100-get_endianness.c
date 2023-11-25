#include "main.h"

/**
 * get_endianness - checks
 * Return: 0, or 1 
 */
int get_endianness(void)
{
	unsigned int a;
	char *c;

	a = 1;
	c = (char *) &a;

	return ((int)*c);
}
