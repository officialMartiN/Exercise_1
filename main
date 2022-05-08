#include <stdio.h>
#include <stdlib.h>
#include "Calc.h"
#include "Convert.h"
#include "m_string.h"

int main()
{
//Initializations
    int Arr[] = {2,-2,1,1,5,3};
    int ArrCmp[] = {4,7,20,9,14,12};
    int Arrnum = sizeof(Arr)/sizeof(Arr[0]);
	int ArrCmp_num = sizeof(ArrCmp)/sizeof(ArrCmp[0]);

printf("Test part for Calc Library\n");
//_CALC_C_ sum function test, expected output: 10
    printf("The sum of the array is: %d \n",sum(Arr,Arrnum));

//_CALC_C_ max function test, expected output: 5
    printf("The maximum value of the array is: %d \n",max(Arr,Arrnum));

//_CALC_C_ min function test, expected output: -2
    printf("The minimum value of the array is: %d \n",min(Arr,Arrnum));

//_CALC_C_ findNum function test, expected output for number 1: 2 times
    int requiredNum = 1;
    printf("The number %d shows up %d times \n",requiredNum,findNum(Arr,Arrnum,requiredNum));

printf("\nTest part for Convert Library\n");
//_CONVERT_C_ dec2bin function test, expected binary result for number 69: 01000101
    int convertNum = 69;
    dec2bin(convertNum);

//_CONVERT_C_ dec2hex function test, expected hexadecimal result for number 69: 45
	printf("\n");
	dec2hex(convertNum);

printf("\n\nTest part for m_string Library");
//_M_STRING_C_ CompareArr function test, expected output: Not equal
	if(CompareArr(Arr, ArrCmp, Arrnum) == 0)
		printf("\nThe two array is not equal\n");
	else if(CompareArr(Arr, ArrCmp, Arrnum) == 1)
		printf("\nThe two array is equal\n");

//_M_STRING_C_ InsertArr function test, expected output: 2 -2 1 4 7 20 9 14 12 1 5 3
	printf("The inserted array is: ");
    InsertArr(Arr, Arrnum, ArrCmp, ArrCmp_num, 3);

//The End
    return 0;
}
