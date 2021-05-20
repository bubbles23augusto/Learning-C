#include <unistd.h>

void wputnumber(char* number, int d)
{
	write(1, number, d);
	write(1, "\n", 1);
}

void writenegative(void)
{
	write(1, "-", 1);
}

int cdigit(int number)
{
	int counter = 0;
  
	while (number != 0)
	{
		counter++;
		number /= 10;
	}

	return (counter);
}

void transform (char* transf, int number, int digito)
{
	int div;
	
	while (number != 0)
	{
		div = number % 10;
		char p = div + '0';
		transf[digito-1] = p;
		number /= 10;
		digito--;
	}
}

int main(void)
{
	int n = 60000;
	int d = cdigit(n);
	char toprint[d];
  
	if (n==0)
	{
		write(1, "0\n", 2);
	}
	
	if (n < 0)
	{
		writenegative();
		n*= -1;
	}

	transform(toprint, n, d);
	wputnumber(toprint, d);

	return (0);
}
