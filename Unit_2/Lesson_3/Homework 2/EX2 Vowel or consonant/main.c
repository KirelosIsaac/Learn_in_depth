/*
 * main.c
 *
 * Created: 09/03/2023
 * Author: Kirelos Isaac
 * -----------------------------------------------------------------------------
 * A program to check is the Character entered by the user is Vowel or Consonant
 * -----------------------------------------------------------------------------
*/


#include<stdio.h>

int main()
{
	char alphapet;
	
	printf("please enter a character to check is Vowel or Consonant");
	scanf("%c",&alphapet);

	if(alphapet=='a' || alphapet=='e' || alphapet=='i' || alphapet=='o' ||alphapet=='A' || alphapet=='E' || alphapet=='I' || alphapet=='O')
	{
		printf("%c is a vowel",alphapet);
	}
	else
	{
		printf("%c is a consonant",alphapet);
	}
	
	return 0;
}