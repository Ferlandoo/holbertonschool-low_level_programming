#include <stdio.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *sec_dog = malloc(sizeof(dog_t));
	char *sec_name = malloc(strlen(name) + 1);
	char *sec_owner = malloc(strlen(owner) + 1);

	if (sec_dog == NULL || sec_name == NULL || sec_owner == NULL)
	{
		return (NULL);
	}
	strcpy(sec_name, name);
	strcpy(sec_owner, owner);
	sec_dog->name = sec_name;
	sec_dog->age = age;
	sec_dog->owner = sec_owner;
}
