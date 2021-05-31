#include <stdio.h>

void divisionextra(int *a, int *b)
{
	int div = *a;
	int mod = *b;
	*a = div/mod;
	*b = div%mod;
}

int main (void)
{
	int a, b;
	
	printf("Digite o valor do Dividendo: ");
	scanf("%i", &a);
	printf("Digite o valor do Divisor: ");
	scanf("%i", &b);
	
	divisionextra(&a,&b);
	
	printf("Essa divisão é igual a %i, com resto %i\n", a, b);
	
	return(0);
}
