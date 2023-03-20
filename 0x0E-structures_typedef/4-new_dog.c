#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * count - counter
 * @c: var to be counted
 * Return: i
 */
int count(char *c)
{
	int i = 0;

	while (*c++)
		i++;
	return (i);
}
/**
 * cpy - copy
 * @cp: to copy var
 * @str: from copy var
 * Return: cp
 */
char *cpy(char *cp, char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		cp[i] = str[i];
	cp[i] = '\0';
	return (cp);
}
/**
 * new_dog - main
 * @name: var
 * @age: var
 * @owner: var
 * Return: newdog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);
	newdog->name = malloc(sizeof(char *) * (count(name) + 1));
	if (newdog->name == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	newdog->owner = malloc(sizeof(char *) * (count(owner) + 1));
	if (newdog->name == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	newdog->name = cpy(newdog->name, name);
	newdog->age = age;
	newdog->owner = cpy(newdog->owner, owner);
	return (newdog);
}

