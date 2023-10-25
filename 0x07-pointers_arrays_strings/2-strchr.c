#include "main.h"

/**
 * _strchr - String
 * @c: Character
 * @s: String
 * Return: Null
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
