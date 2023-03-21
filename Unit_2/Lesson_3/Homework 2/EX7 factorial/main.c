/*
 * main.c
 *
 * Created: 09/03/2023
 * Author: Kirelos Isaac
 * -------------------------------------------------------------------------------
 * A program to get integer number from the user and check if negative the program
 * will alert the user else will print the factorial of the number 
 * -------------------------------------------------------------------------------
*/


#include<stdio.h>

int main()
{
	int i,num=0,fac=1;

	printf("Please eneter an Positive integer number to get its Factorial: ");
	scanf("%i",&num);
	
	if(num<0)
	{
		printf("Error! Factorial of negative numbers doesn't exist");
	}
	else if(num==0 || num==1)
	{
		printf("Factorial = 1");
	}
	else
	{
		for(i=2 ; i<= num ; i++)
		{
			fac *=i;
		}
		printf("Factorial= %i",fac);
	}

	return 0;
}