#ifndef DOG_H
#define DOG_H
/**
 * struct dog - all compsite of dog
 * @name: name of the dog
 * @age: the age of the dog
 * @owner: the dog owner
 *
 * Description: compsite of the dog
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
