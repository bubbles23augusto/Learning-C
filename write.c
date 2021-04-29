#include <unistd.h>
 
int main(void)
{
	//a função write pede três parâmetros = no caso usei 1 ali, pq quero um std-output. "a", escreverá a vogal a
	//que pesa 1 byte. 1 depois é o número de bytes a serem usados. no caso, usa só 1, pra 1 letra.
	write(1, "a", 1);
 
	return (0);
}
