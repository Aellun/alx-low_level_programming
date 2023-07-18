#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
* print_dog -  prints a struct dog
* @d: struct dog to print
*/

void print_dog(struct dog *d)

{

/*Checking if the pointer to struct dog 'd' is NULL*/

if (d == NULL)
/*If 'd' is NULL, there's nothing to print, so return from the function*/
return;

/*Checking if the 'name' member of the struct is NULL*/
if (d->name == NULL)

/*If 'name' is NULL, set it to "(nil)"*/
d->name = "(nil)";

/*Checking if the 'owner' member of the struct is NULL*/
if (d->owner == NULL)

d->owner = "(nil)";

/*Printing the information of the struct dog*/
printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);

}
