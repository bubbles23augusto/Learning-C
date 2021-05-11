#include <unistd.h>

void numberwrite(int unit, int dezena, int centena) {
		
		char unichar = unit + '0' ;
		char chardezena = dezena + '0' ;
		char charcentena = centena +'0';
		
		write(1, &charcentena, 1) ;
		write(1, &chardezena, 1) ;
		write(1, &unichar, 1) ;	
		if (unit == 7 && dezena == 8 && centena == 9) {
			write(1, "\n", 1) ;
		}
		else {
			write(1, ", ", 2) ;
		}
}

int main (void) {
	
	int unit = 0 ;
	int dezena = 0 ;
	int centena = 0 ;
	
	/*here we start the loop of the hundreds*/
	while (centena <= 9){
		/*here we start the loop of the tens*/
		while (dezena <= 9) {
			/*here we exclude the equal values*/
			if (dezena == centena) {
				dezena++ ;
			}
			else {
				/*starting the loop of the units*/
				while (unit <= 9) {
					/*excluding equal values*/
					if (unit == centena || unit == dezena) {
						unit++;
					}
					else {
						numberwrite(unit, dezena, centena) ;
						unit ++ ;
					}
				}
			
				dezena++;
				unit = 0;
			}
		}
		
	centena++ ;
	dezena = 0;
	}
	
	return(0) ;
}
