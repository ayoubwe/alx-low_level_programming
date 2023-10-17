#include "main.h"
/**
 * _strcpy - copy the string pointed to by src, including the ternimating null byte (\0), to the buffer pointed to by dest.
 * @dest: char to check
 * @src: char to check
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
