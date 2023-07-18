#include <stdlib.h>
#include "dog.h"
/**
* free_dog - frees memory allocated for a struct dog
* @d: struct dog to free
*/
void free_dog(dog_t *d)
{
/*Check if the pointer to struct dog 'd' is not NULL*/
if (d)

{
/*If 'd' is not NULL, it means there is a valid dog structure to free*/
/*Free the memory allocated for the 'name' and 'owner' strings of the struct*/

free(d->name);

free(d->owner);

free(d);
/*After this, the entire memory allocated for the dog*/
/*structure and its strings is freed*/
}
}

