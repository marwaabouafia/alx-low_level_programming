#ifndef _DOG_H_
#define _DOG_H_

#include <stdio.h>

/**
 * struct dog - dog types
 *
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: defines dog types
 *
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
