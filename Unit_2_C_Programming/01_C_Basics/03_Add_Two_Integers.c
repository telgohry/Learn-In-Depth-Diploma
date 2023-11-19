// EX3_C_Program_to_Add_Two_Integers
#include <stdio.h>

int SumTwoIntegers(int num1, int num2)
{
	return num1 + num2; 
}


int main(void)
{
	int num1, num2; 
	
	printf("Please enter two integers: ");
	scanf("%d %d", &num1, &num2);
	
	printf("Sum: %d\n", SumTwoIntegers(num1,num2));
	
	return 0;
}