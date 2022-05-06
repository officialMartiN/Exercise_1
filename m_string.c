#include <stdio.h>
#include <stdlib.h>

int CompareArr(int *Arr1,int *Arr2, int numArr)
{
	for(int i=0;i<numArr;i++)
	{
		if(Arr1[i] != Arr2[i])
			return 0;
	}
	return 1;
}

void InsertArr(int *Arr, int numArr, int insertNum, int insertPos)
{
	int newnumArr = numArr + 1;
	int *newArr = malloc (newnumArr*sizeof(int));
	for(int i=newnumArr-1;i>insertPos;i--)
	{
		newArr[i] = Arr[i-1];
	}
	
	for (int i=0;i<insertPos;i++)
	{
		newArr[i]= Arr[i];
	}
	newArr[insertPos] = insertNum;
	for(int i=0;i<newnumArr;i++)
	{
		printf("%d ",newArr[i]);
	}
}
