#include <stdio.h>

int max_of_two(int a, int b)  {
	
	/*used a ternary function: ? : and that means.. if condition ? is true 
	value a : else value b*/
    int maior = (a >= b) ? a : b;
	return(maior)
	;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = max_of_two(a, b);
    printf("%d\n", ans);
    
    return 0;
}
