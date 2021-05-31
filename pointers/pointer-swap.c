#include <unistd.h>

void writechar(int a, int b)
{
	char cha = a+48;
	char chb = b+48;
	
	write(1, &cha, 1);
	write(1, " ",1);
	write(1, &chb, 1);
	write(1, "\n", 1);
}

void pointerswap(int *a, int *b)
{
	/*gotta save the value of a before swapping, so I store the content of var a
	 in the var store, than swap*/
	int store = *a;
	*a=*b;
	*b=store;
	write(1, "swapped! \n", 10);
}

int main (void)
{
	int a = 2;
	int b = 4;
	
	writechar(a,b);
	
	pointerswap(&a,&b);
	
	writechar(a,b);
	
	return(0);
}
