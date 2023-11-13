#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a structure representing a dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Description: This structure represents a dog and contains information about
 * its name, age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
