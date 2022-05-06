#include <stdio.h>
#include <stdlib.h>
#include "Convert.h"
void dec2bin(int num)
{
	int copy = num, digits_count = 0, actual_bin=0;
	printf("The binary value for %d is: ",num); //print the value of input before it is changed

/*
*To determine how many digits are there in the converted result, we do this:*
*For example, 6 is 101 includes 3 binary digits. Therefore, it must be divided by 2 for 3 times*
*/
	while(copy>0)
	{
		copy /= 2;
		digits_count++;
	}
/*
*Since we want to display binary result as set of 4 digits*
*We have to add 0 digits to the blank position*
*/
	int lacking_zeros = 4 - digits_count % 4;
	digits_count += lacking_zeros; // i.e 101 to 0101

	int *pbin = malloc (digits_count * sizeof(int));
	for (int i = 0; i < digits_count ; i++)
	{
		pbin[i] = num%2;
		num /= 2;
	}
	for(int j=digits_count-1;j>=0;j--)
	{
	    printf("%d",pbin[j]);
	}
}


void dec2hex(int num)
{
	int copy = num, digits_count = 0, actual_bin=0;
	printf("The hexadecimal value for %d is: ",num); //print the value of input before it is changed
	while(copy>0)
	{
		copy /= 16;
		digits_count++;
	}
	char *pbin = malloc (digits_count * sizeof(int));
	for (int i = 0; i < digits_count ; i++)
	{
	    if(num%16<10)
		    pbin[i] = num%16 + 48;
		else
		    pbin[i] = num%16 + 55;
		num /= 16;
	}
	for(int j=digits_count-1;j>=0;j--)
	{
	    printf("%c",pbin[j]);
	}
}

/*
int main()
{
	dec2bin(69);
	printf("\n");
	dec2hex(69);
	return 1;
}
*/
