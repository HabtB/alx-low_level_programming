#include "dog.h"

/**
 * new_dog- function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: retuns dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int i = 0, j = 0;
if (name == NULL)
name = "";
if (owner == NULL)
owner = "";
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
while (name[i] != '\0')
i++;
dog->name = malloc(i + 1);
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
while (owner[j] != '\0')
j++;
dog->owner = malloc(j + 1);
if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
for (i = 0; name[i] != '\0'; i++)
dog->name[i] = name[i];
dog->name[i] = '\0';
for (j = 0; owner[j] != '\0'; j++)
dog->owner[j] = owner[j];
dog->owner[j] = '\0';
dog->age = age;
return (dog);
}
