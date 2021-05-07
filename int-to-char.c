#include <unistd.h>

int intparachar(int transform) {
	/*0 is number 48 in the ascii chart*/
	int ascii = 48 ;
	int base = 0 ;
	char transformed ;
	
	/*gotta check if the number is negative. if it is, print a "-", make it
	positive and then execute the function again*/
	if(transform < 0) 
	{
		write(1, "-", 1);
		transform = transform*-1 ;
		return(intparachar(transform));
	}
	/*here we check, is the number == base? if it is, put it in the char*/
	else
	{
		while (transform != base) {
			ascii++;
			base++;
			}
		transformed = ascii ;
		write(1, &transformed, 1) ;
		return(0);
	}
}

int main (void) 
{
	intparachar(-7);
	return(0);
}
