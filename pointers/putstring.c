#include <unistd.h>

void putstring(char *str)
{
	int count=0;
	/*finds the "null" which ends the string, hence the size*/
	while (str[count] != '\0')
	{
		count++;
	}

	write(1, str, count);
	write(1, "\n", 1);
}

int main (void)
{
	/*string could be declared in a variable or put directly in the function*/
	char str[24] = "Alou, galera de cowboy!";
	
	putstring(str);
	putstring("Quem gosta de vacina bate forte com a mão...");
	putstring("funcionou!");

	return(0);
}
