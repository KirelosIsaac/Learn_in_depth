/*
 * main.c
 *
 * Created: 09/03/2023
 * Author: Kirelos Isaac
 * ---------------------------------
 * A program to multiply two numbers
 * ---------------------------------
*/


#include<stdio.h>

int main()
{
	float num1,num2;

	printf("please, Enter two numbers to multiply:\n");
	scanf("%f %f",&num1,&num2);

	printf("Multiplication = %.2f",num1*num2);

	return 0;
}