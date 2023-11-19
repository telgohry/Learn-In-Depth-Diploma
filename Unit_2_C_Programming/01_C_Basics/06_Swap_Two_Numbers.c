// EX6_C_Program_to_Swap_Two_Numbers
#include <stdio.h>

void SwapTwoFloatNumbers(float *num1, float *num2)
{
	float temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

int main(void)
{
	float a, b; 
	
	printf("Enter value of a: ");
	scanf("%f", &a);
	printf("Enter value of b: ");
	scanf("%f", &b);
	SwapTwoFloatNumbers(&a, &b);
	printf("\n\nAfter swapping, value of a = %f\n",a);
	printf("After swapping, value of b = %f\n",b);
	
	return 0;
}