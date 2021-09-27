#include <stdlib.h>
#include "dog.h"
/**
 *init_dog - Initialize a struct dog
 *@d: dog
 *@name: name of doge
 *@age: age of doge
 *@owner: owner of doge
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
