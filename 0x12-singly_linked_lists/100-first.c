#include "lists.h"
void first_constructor(void) __attribute__((constructor));
/**
 * first_constructor - before main
 * Return : void value
 */
void first_constructor(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
