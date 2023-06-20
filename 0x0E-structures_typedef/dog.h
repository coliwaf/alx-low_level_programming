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

/**
 * dog_t - name of the struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif
