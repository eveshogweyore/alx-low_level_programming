#include <stdio.h>
#include "dog.h"

/* prints_dog - prints a struct dog
 * @dog: dog to be printed
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	if (d == NULL)
		printf("\n");
	else
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
