#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name
 * @age: age
 * @owner: owner
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
int len1 = 0, len2 = 0, i;
dog_t *ptr;

ptr = malloc(sizeof(dog_t));
if (ptr == NULL)
{
return (NULL);
}
ptr->age = age;
while (name[len1] != '\0')
{
len1++;
}
while (owner[len2] != '\0')
{
len2++;
}
ptr->name = malloc(len1 + 1);
ptr->owner = malloc(len2 + 1);
if (ptr->name == NULL || ptr->owner == NULL)
{
free(ptr);
return (NULL);
}
for (i = 0; i < len1; i++)
{
ptr->name[i] = name[i];
}
ptr->name[len1] = '\0';

for (i = 0; i < len2; i++)
{
ptr->owner[i] = owner[i];
}
ptr->owner[len2] = '\0';
return (ptr);
}
