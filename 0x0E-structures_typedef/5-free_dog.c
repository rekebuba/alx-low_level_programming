#include "dog.h"

/**
 * free_dog - frees dogs.
 * 
 * @pd: structure.
 */

void free_dog(dog_t *d)
{
int i;
for (i = 0; i < sizeof(dog_t); i++)
{
ree(d[i]);
}
}
