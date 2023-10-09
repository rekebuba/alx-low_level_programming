#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - length of the string.
 * @word: character
 * Return: 0
 */
int _strlen(char *word)
{
    int i = 0;
    while (word[i] != '\0')
    {
        i++;
    }
    return i;
}
/**
 * _strcopy - copy the string
 * 
 * @word1: characters.
 * @word2: characters.
 */
void _strcopy(char *word1, char *word2)
{
    int i;
    for (i = 0; i < _strlen(word2); i++)
    {
        word1[i] = word2[i];
    }
}
/**
 * new_dog - creates a new dog.
 * @name: name
 * @age: age
 * @owner: owner
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *ptr;
ptr = malloc(sizeof(dog_t));
if (ptr == NULL)
return (NULL);
ptr->name = malloc(sizeof(char) * (_strlen(name) + 1));
ptr->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (ptr->name == NULL || ptr->owner == NULL)
{
free(ptr);
free(ptr->name);
free(ptr->owner);
return (NULL);
}
_strcopy(ptr->name, name);
_strcopy(ptr->owner, owner);
ptr->name[_strlen(name)] = '\0';
ptr->owner[_strlen(owner)] = '\0';
ptr->age = age;
return (ptr);
}
