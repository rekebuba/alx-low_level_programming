#ifndef HEADER
#define HEADER
typedef struct dog dog_t;
/**
 * struct dog - short description
 * @name: name of yhe person
 * @age: their age
 * @owner: owner
 * description: long description
 */
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
