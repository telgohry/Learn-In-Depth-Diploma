// EX7_C_Program_to_Find_Factorial_of_a_Number.c
#include <stdio.h>
#include <ctype.h>

int CalculateFactorial(int num)
{
	int fact = 1; 
	
	while(num>0)
	{
		fact *= num;
		num--; 
	}
	
	return fact; 
}

int main(void)
{
	
	int num;
	
	printf("Enter an integer: ");
	scanf("%d", &num);
	
	if(num<0)
	{
		printf("Error!! Factorial of negative number doesn't exist\n");
	}
	else
	{
		printf("Factorial = %d\n", CalculateFactorial(num));
	}
	
	
	return 0;
}