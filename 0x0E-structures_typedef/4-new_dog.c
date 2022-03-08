#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new instance of dog_t
 *
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: dog_t type pointer to dog_t instance
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	dog_t *new_dog = NULL;

	if (name == NULL)
		return (NULL);

	if (owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	(*new_dog).age = age;

	(*new_dog).name = malloc(sizeof(name) + 1);
		if ((*new_dog).name == NULL)
			return (NULL);

	for (i = 0; name[i]; i++)
		(*new_dog).name[i] = name[i];

	(*new_dog).owner = malloc(sizeof(owner) + 1);
		if ((*new_dog).owner == NULL)
			return (NULL);

	for (i = 0; owner[i]; i++)
		(*new_dog).owner[i] = owner[i];

	return (new_dog);
}
