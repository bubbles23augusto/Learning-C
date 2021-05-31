#include <stdio.h>

void intpointer(int* number)
{
	/*changed the value of the pointer to 42, so n in main will change too*/
	*number = 42;
}

int main (void)
{
	/* n is the variable, *p is the pointer.*/
	int n=0;

	printf("Before: %i\n", n);
	/* p is pointing to the n adddres, so any changes in p, reflect on n */

	intpointer(&n);

	printf("After: %i\n", n);
	
	return(0);
}
