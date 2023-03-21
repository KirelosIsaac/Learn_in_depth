/*
 * main.c
 *
 * Created: 09/03/2023
 * Author: Kirelos Isaac
 * ------------------------------------------------------------
 * A program to scan an integer from the user and print it back 
 * ------------------------------------------------------------
*/


#include<stdio.h>

int main()
{
	int num;

	printf("Enter an integer: ");
	scanf("%i",&num);

	printf("you entered: %i",num);

	return 0;
}