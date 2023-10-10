#include "dog.h"
/**
 * init_dog - same dog struct
 * @d: parameter
 * @name: parameter
 * @age: parameter
 * @owner: parameter
 * Return: void value
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
