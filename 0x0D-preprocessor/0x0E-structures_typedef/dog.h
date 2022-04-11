#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog_t - typedef for struct dog
 */

typedef struct dog dog_t;

/**
 * struct dog - stores dog's info
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: struct called 'dog' that stores its 
 * name, age and its owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
