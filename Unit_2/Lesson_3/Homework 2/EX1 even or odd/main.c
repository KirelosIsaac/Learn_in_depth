/*
 * main.c
 *
 * Created: 09/03/2023
 * Author: Kirelos Isaac
 * -------------------------------------------------------------------
 * A program to check is the number entered by the user is even or odd 
 * -------------------------------------------------------------------
*/


#include<stdio.h>

int main()
{
	//To declare an integer with size 4-bytes
	int number;

	//to print to the screen
	printf("Please, Enter an integer you want to check if even or odd: ");
	
	//To scan Decimal number from the user
	scanf("%d",&number);

	//To check wether the numer is Even or Odd and print the checking Result 
	(number%2==0)?printf("%d is even",number):printf("%d is odd",number);

	return 0;
}