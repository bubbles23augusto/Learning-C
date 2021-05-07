#include <unistd.h>

int wputchar(char str_input[9]) 
{
	write(1, str_input, 9);
	return(0);
}

int main(void) 
{
	/* For this program specifically, it wasn't necessary to create the 'buf' to
	 print that string... but I wanted to work with it, 'cause I think it's 
	 going to be useful later */
	char buf[9] = "bubbles!\n" ;
	wputchar(buf);
	return(0);
}
