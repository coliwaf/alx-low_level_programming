include "dog.h"

/**
 * init_dog - inititalizes a var of tyle struct dog
 * @d: dog param
 * @name: dog's name param
 * @age: dog's age
 * @char: dog's char
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
