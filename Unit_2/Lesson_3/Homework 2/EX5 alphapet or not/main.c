/*
 * main.c
 *
 * Created: 09/03/2023
 * Author: Kirelos Isaac
 * ------------------------------------------------------------------------------
 * A program to check wether the character entered by the user is alphapet or not
 * ------------------------------------------------------------------------------
 * 
*/


#include<stdio.h>

int main()
{
	char is_alphapet;

	printf("Please, Enter a character: ");
	scanf("%c",&is_alphapet);

	if((is_alphapet>=65 && is_alphapet<=90) || (is_alphapet>=97 && is_alphapet<=123))
	{
		printf("%c is alphapet",is_alphapet);
	}	
	else
	{
		printf("%c is not alphapet",is_alphapet);

	}
	
	return 0;
}