#ifndef DOG
#define DOG
/**
 * struct dog - Contains neccesary data of a identificate a dog
 * @name: name of the dog.
 * @age: age of a dog.
 * @owner: ownwer of a dog.
 */

struct dog
{

	char *name;
	float age;
	char *owner;
};


typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
