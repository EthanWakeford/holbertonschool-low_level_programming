#include "dog.h"

/**
*new_dog - makes new dog
*@name: name
*@age: age
*@owner: owner
*Return: null if fail, dog_t if pass
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;
	char *namestr;
	char *ownerstr;

	nd = malloc(sizeof(dog_t));
	if (nd == NULL)
		return (NULL);
	namestr = malloc(sizeof(name) + 1);
	ownerstr = malloc(sizeof(owner) + 1);
	if (namestr == NULL || ownerstr == NULL)
	{
		free(nd);
		free(namestr);
		free(ownerstr);
		return (NULL);
	}
	strcpy(namestr, name);
	nd->name = namestr;
	nd->age = age;
	strcpy(ownerstr, owner);
	nd->owner = ownerstr;
	return (nd);
}
