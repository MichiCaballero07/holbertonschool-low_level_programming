#ifndef DOG_H
#define DOG_H
/**
 * struct dog - new type
 * @name: type char
 * @age: type float
 * @owner: type char
 * Returno 0
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
