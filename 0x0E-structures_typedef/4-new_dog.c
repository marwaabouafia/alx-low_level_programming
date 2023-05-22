#include "dog.h"

/**
 * my_strlen - finds string length
 *
 * @str: input string
 *
 * Return: string length unsigned integer
 *
 */

unsigned int my_strlen(char *str)
{
	unsigned int i = 0;

	while (*(str + i) != '\0')
		i++;
	return (i);
}

/**
 * my_strcpy - copies string
 *
 * @to: pointer to new string
 * @from: pointer to string to copy
 *
 * Return: void
 *
 */

void my_strcpy(char *to, char *from)
{
	unsigned int i, len = my_strlen(from);

	for (i = 0; i <= len; i++)
		to[i] = from[i];
}

/**
 * new_dog - creates new type of struct dog
 *
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: pointer to the type of struct dog
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int name_len = my_strlen(name), owner_len = my_strlen(owner);
	dog_t *new_dogg;

	new_dogg = malloc(sizeof(dog_t));
	if (new_dogg)
	{
		new_dogg->name = malloc(sizeof(char) * (name_len + 1));
		if (new_dogg->name)
		{
			new_dogg->owner = malloc(sizeof(char) * (owner_len + 1));
			if (new_dogg->owner)
			{
				my_strcpy(new_dogg->name, name);
				new_dogg->age = age;
				my_strcpy(new_dogg->owner, owner);
				return (new_dogg);
			}
			else
			{
				free(new_dogg->name);
				free(new_dogg);
			}
		}
		else
			free(new_dogg);
	}
	return (NULL);
}
