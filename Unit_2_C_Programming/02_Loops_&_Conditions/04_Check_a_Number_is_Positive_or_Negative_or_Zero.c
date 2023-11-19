// EX4_C_Program_to_Check_a_Number_is_Positive_or_Negative_or_Zero.c
#include <stdio.h>
#include <ctype.h>

typedef enum PositiveOrNegative{Zero=0,Positive=1, Negative=2}enPositiveOrNegative;

enPositiveOrNegative CheckNumberPositiveOrNegative(float number)
{
	enPositiveOrNegative result = Zero; 
	
	if(number>0)
	{
		result = Positive;
	}
	else if(number<0)
	{
		result = Negative;
	}
	
	return result; 
}


int main(void)
{
	
	float num;
	
	printf("Enter a number: ");
	scanf("%f", &num);
	
	if(CheckNumberPositiveOrNegative(num)==Positive)
	{
		printf("%.2f is positive\n",num);
	}
	else if(CheckNumberPositiveOrNegative(num)==Negative)
	{
		printf("%.2f is negative\n",num);
	}
	else
	{
		printf("You entered zero\n");
	}
	
	return 0;
}