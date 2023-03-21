/*
 * main.c
 *
 * Created: 09/03/2023
 * Author: Kirelos Isaac
 * ---------------------------------------------------------------------------------------
 * A program to get the sum of 1+2+3+...n where n is an integer number entered by the user
 * ---------------------------------------------------------------------------------------
*/


#include<stdio.h>

int main()
{
	
	int i,n=0,sum=0;
	
	printf("Please, Enter integer number to display the value of 1+2+..n : ");
	scanf("%i",&n);

	for (i=0 ; i<=n ; i++)
	{
		sum+=i;
	}
	
	printf("Sum = %i",sum);

	return 0;
}