#include <unistd.h>

void putstring(char *str)
{
	write(1, str, 22);
}

int main (void)
{
	char *str = "alo, galera de cowboy!";
	putstring(str);
}
