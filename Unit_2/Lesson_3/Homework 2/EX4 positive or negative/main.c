/*
 * main.c
 *
 * Created: 09/03/2023
 * Author: Kirelos Isaac
 * ------------------------------------------------------------------------------------
 * A program to check is the number entered by the user is positive or negative or zero
 * ------------------------------------------------------------------------------------
*/


#include<stdio.h>

int main()
{
	float num;
	
	printf("please enter a number to check is positive or negative: ");
	scanf("%f",&num);

	if(num>0)
	{
		printf("%.1f is positive",num);
	}
	else if(num==0)
	{
		printf("You entered zero");
	}
	else
	{
		printf("%.1f is negative",num);
	}
	
	return 0;
}