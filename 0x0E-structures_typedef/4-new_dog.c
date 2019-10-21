#include "dog.h"
#include <stdlib.h>

/**
 * *_strdup - copy an array.
 * @str: Contains a string to copy..
 *
 * Return: new array.
 */

char *_strdup(char *str)
{
	char *a;
	int i;
	int j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
	}

	a = malloc(sizeof(char) * i + 1);

	if (a == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		a[j] = str[j];

	return (a);
}

/**
 * new_dog - adds new dog.
 * @name: name of the dog.
 * @age: age of a dog.
 * @owner: owner of a dog.
 * Return: a new data of dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(struct dog));

	if (dog == NULL)
		return (NULL);

	dog->name = _strdup(name);
	if (dog->name == 0)
	{
		free(dog);
		return (0);
	}


	dog->age = age;

	dog->owner = _strdup(owner);
	if (dog->owner == 0)
	{
		free(dog->name);
		free(dog);
		return (0);
	}


	return (dog);
}
