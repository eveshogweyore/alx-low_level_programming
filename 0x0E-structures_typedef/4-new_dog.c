#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: On success (pointer to new dog), otherwise (0)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i, name_length = 0, owner_length = 0;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}

	for (; name[name_length]; name_length++)
		;
	for (; owner[owner_length]; owner_length++)
		;

	dog->name = malloc(name_length + 1);
	dog->owner = malloc(name_length + 1);
	if (!(dog->name) || !(dog->owner))
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}

	for (i = 0; i < name_length; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';

	dog->age = age;

	for (i = 0; i < owner_length; i++)
		dog->owner[i] = owner[i];
	dog->owner[i] = '\0';

	return (dog);
}
