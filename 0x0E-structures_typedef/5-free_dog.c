#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: free_dog
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
