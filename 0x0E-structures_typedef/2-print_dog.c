#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - struct
 * @d: parameter
 * Return: void value
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n",
		(*d).name != NULL ? d->name : "(nil)",
		(*d).age,
		(*d).owner != NULL ? d->owner : "(nil)");
	}
}
