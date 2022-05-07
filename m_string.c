#include <stdio.h>
#include <stdlib.h>
#include "m_string.h"

int CompareArr(int *Arr1, int *Arr2, int numArr)
{
	for(int i = 0;i < numArr;i++)
	{
		if(Arr1[i] != Arr2[i])
		{
			return 0;
		}
	}
	return 1;
}

void InsertArr(int *Arr, int numArr, int insertNum, int insertPos)
{
	int newnumArr = numArr + 1;
	int *newArr = malloc (newnumArr * sizeof(int));
	//Insertion
	for(int i = 0;i < newnumArr;i++)
	{
		if (i < insertPos)
			newArr[i]= Arr[i];
		else if (i == insertPos)
			newArr[insertPos] = insertNum;	
		else if (i > insertPos)
			newArr[i] = Arr[i-1];
	}
	//Print out
	for(int i = 0;i < newnumArr;i++)
	{
		printf("%d ", newArr[i]);
	}
	free(newArr);
}

/*
int main()
{
	int Arr1[] = {2,-2,1,1,5,3};
	int Arr2[] = {2,-2,1,1,5,3};
	int N = sizeof(Arr1)/sizeof(Arr1[0]);
	if(CompareArr(Arr1, Arr2, N) == 0)
		printf("The two array is not equal");
	else if(CompareArr(Arr1, Arr2, N) == 1)
		printf("The two array is equal");
	printf("\n");
	printf("The inserted array is: ");
	InsertArr(Arr1, N, 8, 3);
}
*/
