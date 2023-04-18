#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _strdup - returns pointer to new alocated memor space
  * 	containing copy of string parameter
  * @str: string
  * Return: pointer to copied string or NULL
  *
  */
chat *_strdup(char *str)
{
	char *ar;
	unsigned int i = 0;
	unsigned int j = 0;

	if (str == NULL)
	{
		return (NULL);
	} while (str[i])
	{
		i++;
	}
	ar = malloc(sizeof(char) * (i + 1));
	if (ar == NULL)
	{
		return (NULL);
	} while (str[j])
	{
		ar[j] = str[j];
		j++;
	}
	ar[j] = 0;
	return (ar);
}

/**
  * new_dog - creates new dog
  * @name: dog name
  * @age: dog age
  * @owner: dog owner
  * Return: NULL in the event of failure
  *
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *ncpy;
	char *ocpy;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	ncpy = _strdup(name);
	if (!ncpy && name)
	{
		free(new);
		return (NULL);
	}
	ocpy = _strdup(owner);
	if (!ocpy && owner)
	{
		free(ncpy);
		free(new);
		return (NULL);
	}

	new->name = ncpy;
	new->age = age;
	new->owner = ocpy;

	return (new);
}
