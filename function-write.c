#include <unistd.h>

int wputchar(char *char_input) 
{
	write(1, char_input, 1);
	return(0);
}

int main(void) 
{
	wputchar("B");
	return(0);
}
