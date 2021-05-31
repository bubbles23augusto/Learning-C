#include <stdio.h>

void division(int a, int b, int *div, int *mod)
{
	*div = a/b;
	*mod = a%b;
}

int main (void)
{
	int a;
	int b;
	int div;
	int mod;
	
	printf("Digite o valor do Dividendo: ");
	scanf("%i", &a);
	printf("Digite o valor do Divisor: ");
	scanf("%i", &b);
	
	division(a,b, &div,&mod);
	
	printf("%i / %i = %i, com resto %i\n", a, b, div, mod);
	
	return(0);
}
