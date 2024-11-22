#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * name_copy - function
 * @name: pointer
 * Return: name copy
 */
char *name_copy(char *name)
{
	int i;
	char *n;

	i = 0;
	while (name[i] != 0)
	{
		i++;
	}
	n = malloc(i + 1);
	if (n == NULL)
	{
		free(n);
		return (NULL);
	}
	i = 0;
	while (name[i] != 0)
	{
		n[i] = name[i];
		i++;
	}
	n[i] = '\0';

	return (n);
}

/**
 * owner_copy - func
 * @owner: pointer
 * Return: owner copy
 */
char *owner_copy(char *owner)
{
	int i;
	char *o;

	i = 0;
	while (owner[i] != 0)
	{
		i++;
	}
	o = malloc(i + 1);
	if (o == NULL)
	{
		free(o);
		return (NULL);
	}
	i = 0;
	while (owner[i] != 0)
	{
		o[i] = owner[i];
		i++;
	}
	o[i] = '\0';

	return (o);
}

/**
 * new_dog - function
 * @age: variable
 * @owner: pointer
 * @name: pointer
 * Return: new_dog info
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *t;
	char *n;
	char *o;

	t = malloc(sizeof(dog_t));
	if (t == NULL)
	{
		free(t);
		return (NULL);
	}
	n = name_copy(name);
	o = owner_copy(owner);
	if (n == NULL || o == NULL)
	{
		free(o);
		free(n);
		free(t);
		return (NULL);
	}
	t->name = n;
	t->age = age;
	t->owner = o;

	return (t);
}
