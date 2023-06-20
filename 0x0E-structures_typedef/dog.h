#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines dog object
 * @name: dog's name
 * @age: dog's edge
 * @owner: dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
