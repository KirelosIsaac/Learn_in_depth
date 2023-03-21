/*
 * main.c
 *
 * Created: 09/03/2023
 * Author: Kirelos Isaac
 * ---------------------------------------
 * A program to swap two numbers with temp
 * ---------------------------------------
*/


#include<stdio.h>

int main()
{
	float a,b,temp;
	printf("Please, Enter the value of a: ");
	scanf("%f",&a);
	printf("Please, Enter the value of b: ");
	scanf("%f",&b);

	temp=a;
	a=b;
	b=temp;

	printf("After Swaping, Value of a= %.2f\n",a);
	printf("After Swaping, Value of b= %.2f",b);

	return 0;
}