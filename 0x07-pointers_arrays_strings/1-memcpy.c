#include "main.h"

/**
 * _memcpy - That copies memory area
 * @n: copies
 * @src: Memory area
 * @dest: Memory area
 * Return: Dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
