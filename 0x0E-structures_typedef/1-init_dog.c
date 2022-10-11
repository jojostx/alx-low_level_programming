#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer struct to initialize
 * @name: name of dog (char *)
 * @age: age of dog (float)
 * @owner: owner of dog (char *)
 *
 * Returns: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d){
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
