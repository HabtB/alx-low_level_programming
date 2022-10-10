#include "dog.h"

/**
 *free_dog- a function that frees dogs
 * @d: dogs to be freed
 *
 * Return: returns nothing
 */

void free_dog(dog_t *d)
{
if (d == NULL)
return;

free(d->owner);
free(d->name);
free(d);
}
