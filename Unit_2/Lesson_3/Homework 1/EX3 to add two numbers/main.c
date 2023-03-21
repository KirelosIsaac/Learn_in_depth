/*
 * main.c
 *
 * Created: 09/03/2023
 * Author: Kirelos Isaac
 * ----------------------------
 * A program to add two numbers
 * ----------------------------
*/


#include<stdio.h>

int main()
{
	int num1,num2;

	printf("Please, Enter two numbers to add them:\n");
	scanf("%i %i",&num1,&num2);
	
	printf("Sum = %i",num1+num2);

	return 0;
}