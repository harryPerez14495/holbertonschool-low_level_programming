#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the new dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	unsigned int name_len = 0, owner_len = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[name_len])
		name_len++;
	while (owner[owner_len])
		owner_len++;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	new->name = malloc(name_len + 1);
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}

	new->owner = malloc(owner_len + 1);
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	for (i = 0; i <= name_len; i++)
		new->name[i] = name[i];
	for (i = 0; i <= owner_len; i++)
		new->owner[i] = owner[i];

	new->age = age;
	return (new);
}
