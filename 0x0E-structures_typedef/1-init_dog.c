#include <stdlib.h>
#include "dog.h"
/**
* init_dog - function that initialize a variable of type struct dog
* @d: variable to initialize
* @name: dog name
* @age: dog age
* @owner: dog owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
