#ifndef HEADER
#define HEADER
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

typedef struct dog dog_t;
#endif
