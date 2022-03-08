#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: Stores dogs data in a stru
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#define dog_t struct dog
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
