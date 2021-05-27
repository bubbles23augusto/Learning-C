#include <unistd.h>

int checknum(int number[], int digit, int printa)
{	/*this is a force check in the number stored in the array for repetitions*/
	int test =0;
	int check =0;

	while (check < digit)
	{
		while (test < digit)
		{
			/* this could break the whole thing, so must be avoided*/
			if (test == check)
			{
				test++;
			}
			/* checks for repetitive numbers in the array*/
			if (number[check] == number[test])
			{
				printa=1;
				
				return(printa);
			}
			/*checks for numbers already used, but in a different order*/
			if (test < check && number[check] < number[test])
			{
				printa=1;
	
				return(printa);
			}
			
			test++;
		}
		
		check++;
		test=0;
	}	
	
	return(printa);
}

void getnumber(int digit, int list[], int number[], int count, int index)
{
    /* here the while goes till nine cause of the number of possibilities
    the second part "10-index..." helps to avoid repeating numbers*/
    while (index<=9 && 10-index >= digit - count)
    {
		number[count] = list[index];
		
        /*this is actually  just used to print the number*/
        if (count == digit)
        {
			int printa=0;
			
			if (digit > 2)
			{
				/*if the force check says the number is not needed, just stop*/
				if (checknum(number, digit, printa) == 1)
				{
					return;
				}
			}
			
			if (count!= 0 && index!=1)
			{
				write(1, ", ", 2);
			}
                        
            while(printa < digit)
            {
                char chum = number[printa] + 48;
                write(1, &chum, 1);
                printa++;
            }
            
            return;
        }
        
        index++;
        getnumber(digit, list, number, count+1, index-count);
    }
}

void printcomb(int digit)
{
    /*created a list with possible numbers*/
    int list[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int number[digit];
    
    if (digit ==1)
    {
		digit=0;
		
		while (digit <= 9)
		{
			char chum = list[digit]+48;
			
			if (digit != 0)
			{
				write(1, ", ", 2);
			}
			
			write(1, &chum, 1);
			digit++;
		}
	}
	
	else
	{
		getnumber(digit, list, number, 0, 0);
	}
}

int main (void)
{
    int digit = 8;
    
    printcomb(digit);
    write(1, "\n", 1);
    
    return(0);
}
