// EX7_C_Program_To_Swap_Two_Numbers_Without_Temp_Variable
#include <stdio.h>

void SwapTwoFloatNumbersWithoutTemp(int *num1, int *num2)
{
	*num1 ^= *num2;
	*num2 ^= *num1;
	*num1 ^= *num2; 
}

int main(void)
{
	int a, b; 
	
	printf("Enter value of a: ");
	scanf("%d", &a);
	printf("Enter value of b: ");
	scanf("%d", &b);
	SwapTwoFloatNumbersWithoutTemp(&a, &b);
	printf("\n\nAfter swapping, value of a = %d\n",a);
	printf("After swapping, value of b = %d\n",b);
	
	return 0;
}