#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block.
 * @ptr: void
 * @old_size: un.int
 * @new_size: un.int
 * Return: ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
