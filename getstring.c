#include <stdio.h>

int main()
{
	//a variável name precisa ser alocada com um espaço de memória (no caso, [20])
	char name[20];
	printf("Olá, qual é seu nome? ");
	//muita atenção que no caso de STRINGS não há necessidade do & antes da variável name
	scanf("%s[\n]" , name);
	printf("Olá, %s! Muito prazer!\n" , name);
	
return(0);	
}

