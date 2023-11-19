// EX1_C_Program_to_Check_a_Number_Is_Even.c
#include <stdio.h>

typedef enum OddOrEven{Odd=1, Even=2}enOddOrEven;

enOddOrEven CheckOddOrEven(int number)
{
	enOddOrEven result = Odd;
	
	if(number%2==0)
	{
		result = Even; 
	}
	
	return result; 
}

int main(void)
{
	int num=0; 
	
	printf("Enter an integer you want to check: ");
	scanf("%d", &num);
	
	if(CheckOddOrEven(num)==Even)
	{
		printf("%d is Even\n",num);
	}
	else
	{
		printf("%d is Odd\n",num);
	}
	
	return 0;
}