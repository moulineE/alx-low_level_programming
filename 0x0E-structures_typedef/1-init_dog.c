#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: the variable
 * @name: argument to pass to the char name in struct dog of variable d
 * @age: argument to pass to the float age in struct dog of variable d
 * @owner: argument to pass to the char owner in struct dog of variable d
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
