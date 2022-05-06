#include <stdio.h>
#include <stdlib.h>
#include "Calc.h"

int sum(int *Arr,int Arrnum)
{
	int i=0, sum=0;
	while(i<Arrnum)
	{
		sum += Arr[i];
		i++;
	}
	return sum;
}

int max(int *Arr, int Arrnum)
{
	int max = Arr[0];
	for(int i=0;i<Arrnum;i++)
	{
		if (Arr[i] > max)
			max = Arr[i];
	}
	return max;
}

int min(int *Arr, int Arrnum)
{
	int min = Arr[0];
	for(int i=0;i<Arrnum;i++)
	{
		if (Arr[i] < min)
			min = Arr[i];
	}
	return min;
}

int findNum(int *Arr, int Arrnum, int requiredNum)
{
	int occurances=0;
	int *p= malloc(Arrnum*sizeof(int));
	for(int pos=0;pos<Arrnum;pos++)
	{
		if (Arr[pos] == requiredNum)
		{
			p[occurances] = pos;
			occurances++;	
		}	
	}
	if(occurances>0)
	{
		printf("The number %d showed at the position of: ", requiredNum);
		for (int i=0;i<occurances;i++)
		{
			printf("%d ",p[i]);
		}
		printf("\n");
	}
	free(p);
	return occurances;
}

/*
int main()

{
/*Initializations*/
    int Arr[] = {2,-2,1,1,5,3};
    int Arrnum = sizeof(Arr)/sizeof(Arr[0]);
    
/* sum function test, expected output: 10 */ 
    printf("The sum of the array is: %d \n",sum(Arr,Arrnum));
    
/* max function test, expected output: 5 */
    printf("The maximum value of the array is: %d \n",max(Arr,Arrnum));
    
/* min function test, expected output: -2 */
    printf("The minimum value of the array is: %d \n",min(Arr,Arrnum)); 
    
/* findNum function test, expected output for number 1: 2 times */
    int requiredNum = 1;
    printf("The number %d shows up %d times",requiredNum,findNum(Arr,Arrnum,requiredNum));

/* The End */
    return 0;
}
*/
