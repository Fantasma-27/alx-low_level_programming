x#ifndef DOG_H
#define DOG_H
/**
 * struct dog - the dog's basic information
 * @name: First peice of info
 * @age: Second piece of info
 * @owner: Third piece of info
 * Description: Longer information is added
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for structure dog
 */

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
#endif
