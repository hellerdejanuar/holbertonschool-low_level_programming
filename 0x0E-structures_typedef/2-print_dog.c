#include "dog.h"
#include <stdio.h>

void print_dog(struct dog *d)
{
	if ((*d).name == NULL)
		(*d).name = "(nil)";

	if ((*d).name == NULL)
		(*d).owner = "(nil)";

	else	
		printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
}
