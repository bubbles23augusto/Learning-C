#include <unistd.h>

int main(void)
{
	//o contador que vai parar o while serve como inicio na posição correta, utilizando 97, tabela ascii = a
	int contador = 97;
	while(contador <123)
	{
	//aqui que achei que foi meio na gambiarra, mas transformei o int em char, depois o char em *char...
	char alfa = contador;
	char *beta = &alfa ;
	//funcao pra escrever, 1 pq eh um output que eu quero, beta que eh o char correto... só escreve 1 byte (8bits)
	write(1, beta , 1);
 	contador++;
	}
	return (0);
}
