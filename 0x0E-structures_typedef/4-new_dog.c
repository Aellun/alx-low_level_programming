#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - prints the length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	/*Loop until the null terminator '\0' is found*/
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);

}
/**
*_strcpy - copies the string pointed to by src
* including the terminating null byte (\0)
* to the buffer pointed to by dest
* @dest: pointer to the buffer in which we copy the string
* @src: string to be copied
* Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{

	int len, i;

	len = 0;

	/*Calculate the length of the src string*/
	while (src[len] != '\0')
	{
		len++;
	}
/*Copy the characters from src to dest*/
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
/*Append the null terminator at the end of dest*/
	dest[i] = '\0';
/*Return the pointer to the destination string*/
	return (dest);
}
/**
* new_dog - creates a new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog*
* Return: pointer to the new dog (Success), NULL otherwise
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	int len1, len2;

/*Calculate the lengths of the name and owner strings using _strlen function*/
	len1 = _strlen(name);

	len2 = _strlen(owner);

/*Allocate memory for the new dog structure using malloc*/
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

/*Allocate memory for the name and owner strings using malloc*/
	dog->name = malloc(len1 + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(len2 + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
/*Copy  name, owner strings to the allocated memory using _strcpy function*/
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	/*Return the pointer to the new dog structure as success*/
	return (dog);
