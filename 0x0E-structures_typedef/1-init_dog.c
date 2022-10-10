#include "dog.h"


/**
 * init_dog- init a dog type
 * @d: struct dog pointer
 * @name: name of a dog
 * @age: age of a dog
 * @owner: owner of dog
 *
 * Return: returns nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

if (!d)
return;

d->name = name;
d->age = age;
d->owner = owner;
}
