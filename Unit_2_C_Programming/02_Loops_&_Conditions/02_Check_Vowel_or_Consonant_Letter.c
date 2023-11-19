// EX2_C_Program_to_Check_Vowel_or_Consonant_Letter.c
#include <stdio.h>
#include <ctype.h>

typedef enum VowelOrConsonants{Vowel=1, Consonants=2}enVowelOrConsonants;

enVowelOrConsonants CheckVowelOrConsonants(char ch)
{
	enVowelOrConsonants result = Consonants;
	ch = tolower(ch);
	
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	{
		result = Vowel;
	}
	
	return result; 
}

int main(void)
{
	char ch; 
	
	printf("Enter an alphabet: ");
	fflush(stdin);
	scanf("%c", &ch);
	
	if(CheckVowelOrConsonants(ch)==Vowel)
	{
		printf("%c is Vowel\n",ch);
	}
	else
	{
		printf("%c is Consonants\n",ch);
	}
	
	return 0;
}