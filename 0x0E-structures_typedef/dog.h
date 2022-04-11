#ifndef _DOG_H_
#define _DOG_H_


/**
 * struct dog - stores dog's info
 * dog_t - new name fo the type struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: struct called 'dog' that stores its
 * name, age and its owner's name
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
void free_dog(dog_t *d);

#endif
