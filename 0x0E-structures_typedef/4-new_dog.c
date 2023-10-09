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
while (name[len1] != '\0')
{
len1++;
}
while (owner[len2] != '\0')
{
len2++;
}

ptr = malloc(sizeof(dog_t));
if (ptr == NULL)
{
return (NULL);
}
ptr->name = malloc(sizeof(char) * (len1 + 1));
if (ptr->name == NULL)
{
free(ptr);
return (NULL);
}
ptr->owner = malloc(sizeof(char) * (len2 + 1));
if ( ptr->owner == NULL)
{
free(ptr);
free(ptr->name);
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
ptr->age = age;
return (ptr);
}
