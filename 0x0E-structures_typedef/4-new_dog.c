#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - function that creates a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 *
 * Return: new dog if success
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	int lname;
	int lowner;
	
	lname = (_strlen(name) + 1);
	lowner = (_strlen(owner) + 1);
	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
	{
		return (NULL);
	}
	my_dog->name = malloc(sizeof(lname));
	if (my_dog->name == NULL)
	{
		free(my_dog->name);
		return (NULL);
	}
	my_dog->owner = malloc(sizeof(lowner));
	if (my_dog->owner == NULL)
	{
		free(my_dog->owner);
		return (NULL);
	}
	my_dog->age = age;
	_strcpy(my_dog->name, name);
	_strcpy(my_dog->owner, owner);
	return (my_dog);
}
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byteto the buffer pointed to by dest.
 * @dest: the destionation to copie
 * @src: the string to copy
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) > 0; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = '\0';
	return (dest);
}
