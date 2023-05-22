#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
* free_dog - entry point
* Return: always 0 success
* @d: structure member
*/
void free_dog(dog_t *d)
{
if (d)
{
if (d->name)
free(d->name);

if (d->owner)
free(d->owner);

free(d);
}
}

