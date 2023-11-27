#include "main.h"
#include "dog.h"
/**
 *init_dog - initializes a variable of type struct dog
 *@d: pointer to struct dog
 *@name: name of dog
 *@age: age of the dog
 *@owner: the onwer
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
return;
}
d->name = name;
d->age = age;
d->owner = owner;
}
