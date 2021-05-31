#include <stdio.h>

void hugepointer(int *********number)
{
	/*changed the value of the pointer to 42, so n in main will change too*/
	*********number = 42;
}

int main (void)
{
	/* n is the variable, *p is the pointer.*/
	int n=0;
	int *p=&n;
	int **p2=&p;
	int ***p3=&p2;
	int ****p4=&p3;
	int *****p5=&p4;
	int ******p6=&p5;
	int *******p7=&p6;
	int ********p8=&p7;
	int *********p9=&p8;

	printf("Before: %i\n", n);
	/* p is pointing to the n adddres, so any changes in p, reflect on n */

	hugepointer(p9);

	printf("After: %i\n", n);
	
	return(0);
}
