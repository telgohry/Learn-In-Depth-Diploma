// EX5_C_Program_to_Check_a_Character_is_an_Alphabet_or_Not.c
#include <stdio.h>
#include <ctype.h>

char CheckAlphabetOrNot(char ch)
{
	char result = 0;
	if((ch>='A'&&ch<'Z')||(ch>='a'&&ch<'z'))
	{
		result = 1;
	}
	
	return result;
}




int main(void)
{
	
	char ch; 
	
	printf("Enter a character: ");
	fflush(stdin);
	scanf("%c", &ch);
	
	if(CheckAlphabetOrNot(ch))
	{
		printf("%c is an alphabet\n", ch);
	}
	else
	{
		printf("%c is not an alphabet\n", ch);
	}
	
	return 0;
}