// EX3_C_Program_to_Find_The_Largest_Number.c
#include <stdio.h>
#include <ctype.h>

float FindLargestNumber(float num1, float num2, float num3)
{
	float largestNumber = num1;
	
	if(num2>num1 && num2>num3)
	{
		largestNumber = num2; 
	}
	else if(num3>num2)
	{
		largestNumber = num3; 
	}
	
	return largestNumber; 
}

int main(void)
{
	
	float num1, num2, num3;
	
	printf("Enter three numbers: ");
	scanf("%f %f %f", &num1, &num2, &num3);
	
	printf("Largest number = %.2f\n", FindLargestNumber(num1,num2,num3));
	
	return 0;
}