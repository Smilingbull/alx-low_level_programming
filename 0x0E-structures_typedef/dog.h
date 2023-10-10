#ifndef DOG_H
#define DOG_H

/**
 * dog_t - Typedef for struct dog
/*
 * File: dog.h
 * Desc: header file section.
 */
typedef struct dog dog_t;

/**
 * struct dog - structure for dogs
 * @name: first member
 * @age: second member
 * @owner: third member
 * struct dog - A new type describing a dog.
 * @name: defines the name of the dog.
 * @age: defines the age of the dog.
 * @owner: specifies the owner of the dog.
 */
struct dog
{
@@ -19,6 +19,11 @@ struct dog
        char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

