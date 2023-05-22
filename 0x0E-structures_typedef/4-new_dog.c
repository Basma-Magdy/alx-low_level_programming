#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
* new_dog - entry point
* Return: always 0 success
* @age: structure member
* @name: structure member
* @owner: structure member
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d1;
if (!name || age < 0 || !owner)
return (NULL);

d1 = malloc(sizeof(dog_t));
if (d1 == NULL)
return (NULL);

d1->name = name;
d1->age = age;
d1->owner = owner;
return (d1);
}

