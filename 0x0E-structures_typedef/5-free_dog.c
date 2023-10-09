#include "dog.h"

/**
 * free_dog - frees dogs.
 * @d: structure.
 */

void free_dog(dog_t *d)
{
unsigned int i;
for (i = 0; i < sizeof(dog_t); i++)
{
free(d[i]);
}
}
