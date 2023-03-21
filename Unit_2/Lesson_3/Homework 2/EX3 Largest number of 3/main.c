/*
 * main.c
 *
 * Created: 09/03/2023
 * Author: Kirelos Isaac
 * -------------------------------------------------------
 * A Program to check the Largest number between 3 numbers
 * -------------------------------------------------------
*/


#include<stdio.h>

int main()
{
	float num1,num2,num3;

	printf("please, Enter three numbers to check the largest one of them:\n");
	scanf("%f",&num1);
	scanf("%f",&num2);
	scanf("%f",&num3);

	if(num1>num2 && num1>num3)
	{
		printf("%.1f is the largest number",num1);
	}
	if(num2>num1 && num2>num3)
	{ 
		printf("%.1f is the largest number",num2);
	}
	if(num3>num1 && num3>num2)
	{
		printf("%.1f is the largest number",num3);
	}

	return 0;
}