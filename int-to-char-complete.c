#include <unistd.h>

void writenegative(void){
	write(1, "-", 1);
}

void wnumb(int numer) {
	
	char nume = numer +'0';
	
	write (1, &nume, 1);
}

void wzero(int count_reversed, int count_digits) {
	/*write the final zeroes in a number*/
	while (count_digits != count_reversed) {
		write(1,"0",1);
		count_reversed++;
	}
}

void intochar(int revn, int digits) {
	/*converts the reversed number to char and prints*/
	int div;
	int count_reversed = 0;
	
	while (revn != 0) {
		div = revn % 10;
		revn /= 10;
		count_reversed++;
		wnumb(div);
	}
		
	wzero(count_reversed, digits);
	write(1, "\n", 1);
}

void reverse_n(int n) {
	/*this actually reverses the number entered*/
	int div;
	int reversed = 0;
	int count_digits = 0;
	
	if (n < 0) {
		writenegative();
		n*= -1;
	}
	
    while (n != 0) {
    	div = n % 10;
		reversed = reversed * 10 + div;
		n /= 10;
		count_digits++;
	}
	
	/*It's necessary to count the digits to write number ending in zero*/
	intochar(reversed, count_digits);
}

int main() {
	/*this is the number to be printed*/
    int n = -789302;
    
	reverse_n(n);
	
    return (0);
}
