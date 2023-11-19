// EX6_C_Program_to_Calculate_Sum_of_Natural_Numbers.c
#include <stdio.h>
#include <ctype.h>

int SumOfNaturalNumbers(int num)
{
	return ((num*(num+1))/2);
}




int main(void)
{
	
	int num;
	
	printf("Enter an integer: ");
	scanf("%d", &num);
	
	printf("Sum = %d\n", SumOfNaturalNumbers(num));
	
	return 0;
}