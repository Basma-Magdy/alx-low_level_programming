#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
* init_dog - entry point
* Return: always 0 success
* @d: structure instance.
* @age: structure member
* @name: structure member
* @owner: structure member
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}

