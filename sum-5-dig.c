#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int div ;
	int total = 0 ;
    int n ;
    
    printf("digite um número para obter a soma de seus dígitos:");
    
    scanf("%d", &n);
    
    while (n > 0) {
    
    div = n % 10 ;
    n = n /10 ;
    total += div ;
	
	}
    
    printf ("%d\n", total);
    
    return (0) ;
}
