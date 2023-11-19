// EX8_C_Program_to_Make_a_Simple_Calculator_Using_Switch_Case.c
#include <stdio.h>
#include <ctype.h>

float Calculate(float num1, float num2, char op)
{
	float result = 0; 
	
	switch(op)
	{
		case '+':
		result = num1 + num2;
		break;
		case '-':
		result = num1 - num2;
		break;
		case '*':
		result = num1 * num2;
		break;
		case '/':
		result = num1 / num2; 
		break; 
	}
	
	return result;
}

int main(void)
{
	
	float num1,num2;
	char op;
	
	printf("Enter operator either + or - or * or divide: ");
	fflush(stdin);
	scanf("%c", &op);
	
	printf("Enter two operands: ");
	scanf("%f %f",&num1, &num2);
	
	printf("%.1f %c %.1f = %.1f\n", num1, op, num2, Calculate(num1,num2,op));
	
	return 0;
}