// EX4_C_Program_to_Multiply_Two_Floating_Point_Numbers
#include <stdio.h>

float MultiplyTwoFloats(float num1, float num2)
{
	return num1 * num2; 
}


int main(void)
{
	float num1, num2; 
	
	printf("Please enter two floating numbers: ");
	scanf("%f %f", &num1, &num2);
	
	printf("Product: %f\n", MultiplyTwoFloats(num1,num2));
	
	return 0;
}