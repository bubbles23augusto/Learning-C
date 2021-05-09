#include <unistd.h>

void wputchar(char transformed, char buf[30]) {
	write(1, &transformed, 1) ;
	write(1, buf, 30) ;
}

char intparachar(int transform) {
	/*gotta check if the number is negative. if it is, print a "-", make it
	positive and then execute the function again*/
	if(transform < 0) {
		write(1, "-", 1) ;
		transform = transform*-1 ;
	}
	/*to make the int to char, we get the number needed and ad 48 to it, which
	 is the 0 in the ASCII table. use the number or '0' which means the value
	 of the char*/
	char transformed = transform + '0';
	
	return(transformed) ;
}

int main(void) 
{
	int number = 3 ;
	
	if(number >= 0) {
		char buf[30] = " is a positive number.\n" ;
		wputchar(intparachar(number) , buf) ;
	}
	
	else {
		char buf[30] = " is a negative number.\n" ;
		wputchar(intparachar(number), buf) ;
	}
	
	return (0);
}
