#include <unistd.h>

void writenum (int left, int lerda, int d, int u) {
	char leftar = left + '0';
	char lerdar = lerda + '0' ;
	char dchar = d + '0' ;
	char uchar = u + '0' ;
	
	write(1, &leftar, 1) ;
	write(1, &lerdar, 1) ;
	write(1, " ", 1) ;
	write(1, &dchar, 1) ;
	write(1, &uchar, 1) ;
	
	if (left == 9 && lerda == 9 && d == 9 && u == 9)
	write(1, "\n", 1);
	
	else
	write(1, ", ", 2) ;
}

int main (void) {
	int u =0;
	int d = 0;
	int lerda = 0;
	int left = 0;
	
	while (left <= 9) {
		
		while (lerda <= 9) {
			
			while (d <= 9) {
				
				while (u <= 9) {
					writenum (left, lerda, d, u);
					u++ ;
				} 
		
			u = 0;
			d++;
			}
			
			lerda++;
			d = 0;
		}
		
		left++;
		lerda=0;
	}
}
