#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct type containing age, name and owner
 * @name: pointer to string name
 * @age: floating number age
 * @owner: pointer to string owner
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
