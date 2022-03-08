#include "dog.h"
#include <stdio.h>

void print_dog(struct dog *d)
{
	
	printf("Name: %s\nAge: %.1f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
}
