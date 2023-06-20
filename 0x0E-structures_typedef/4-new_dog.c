#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: new dog or null if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr_dog;

