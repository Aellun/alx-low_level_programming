#include <stdlib.h>
#include "dog.h"
/**
* init_dog - initializes a variable of type struct dog
* @d: pointer to struct dog to initialize
* @name: name to initialize
* @age: age to initialize
* @owner: owner to initialize
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
/*Checking if the pointer to struct dog 'd' is NULL*/
if (d == NULL)

/*If 'd' is NULL, allocate memory for a new struct dog using malloc*/
d = malloc(sizeof(struct dog));

/*Assigning  parameters to the corresponding struct members*/
d->name = name;

d->age = age;

d->owner = owner;
}
