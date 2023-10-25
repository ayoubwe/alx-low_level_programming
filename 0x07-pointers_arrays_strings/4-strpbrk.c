#include "main.h"

/**
 * _strpbrk - Set of bytes
 * @s: String
 * @accept: matches one
 * Return: NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
				if (*s == accept[i])
					return (s);
			}
			s++;
		}
	return (NULL);
}
