#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - inititalizes a var of tyle struct dog
 * @d: dog param
 * @name: dog's name param
 * @age: dog's age
 * @char: dog's char
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
