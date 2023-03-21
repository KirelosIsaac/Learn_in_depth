/*
 * main.c
 *
 * Created: 09/03/2023
 * Author: Kirelos Isaac
 * ------------------------------------------
 * A program to swap two numbers without temp
 * ------------------------------------------
*/


#include<stdio.h>

int main()
{
	int a,b,te;
	printf("Please, Enter the value of a: ");
	scanf("%d",&a);
	printf("Please, Enter the value of b: ");
	scanf("%d",&b);

	a=a^b;
	b=b^a;
	a=a^b;

	printf("After Swaping, Value of a= %d\n",a);
	printf("After Swaping, Value of b= %d",b);

	return 0;
}