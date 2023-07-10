#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of unsigned int and char c
 * @size: size of array
 * @c: char to assign
 * Description: create array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;/*Declare a pointer to char*/
	unsigned int i;

	str = malloc(sizeof(char) * size);/*Allocate memory for the array*/
/*Check if the size is 0 or if memory allocation failed*/
	if (size == 0 || str == NULL)
		return (NULL);/*Return NULL to indicate failure*/
/*Assign the character c to each element of the array*/
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
