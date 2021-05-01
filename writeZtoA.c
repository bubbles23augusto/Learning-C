#include <unistd.h>

int main(void)
{
	//o contador que vai parar o while serve como inicio na posição correta, utilizando 97, tabela ascii = a
	int contador = 122;
	while(contador > 96)
	{
		//aqui eu digo pro write: amigo, não quero que você escreva o inteiro, mas o endereço, o apontador de "97", que no caso é "a" no ascii
		write(1, &contador , 1);
		contador--;
	}
	write(1, "\n" , 1);
	return (0);
}
