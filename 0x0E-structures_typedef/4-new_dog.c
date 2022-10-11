#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog struct instance
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: instance of the dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_ptr;
	int i, name_len, owner_len;

	dog_ptr = malloc(sizeof(*dog_ptr));

	if (dog_ptr == NULL || name == NULL || owner == NULL)
	{
		free(dog_ptr);
		return (NULL);
	}

	for (name_len = 0; name[name_len]; name_len++)
		;

	for (owner_len = 0; owner[owner_len]; owner_len++)
		;

	dog_ptr->name = malloc(name_len + 1);
	dog_ptr->owner = malloc(owner_len + 1);

	if (dog_ptr->name == NULL || dog_ptr->owner == NULL)
	{
		free(dog_ptr->name);
		free(dog_ptr->owner);
		free(dog_ptr);
		return (NULL);
	}

	dog_ptr->age = age;

	for (i = 0; i < name_len; i++)
		dog_ptr->name[i] = name[i];
	dog_ptr->name[i] = '\0';

	for (i = 0; i < owner_len; i++)
		dog_ptr->owner[i] = owner[i];
	dog_ptr->owner[i] = '\0';

	return (dog_ptr);
}
