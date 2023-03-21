/*
 * main.c
 *
 * Created: 09/03/2023
 * Author: Kirelos Isaac
 * ----------------------------------------------------------
 * A program to scan a char from the user and print its ASCII
 * ----------------------------------------------------------
*/


#include<stdio.h>

int main()
{
	char c;

	printf("Please, Enter a character to get its ASCII:\n");
	scanf("%c",&c);

	printf("ASCII = %d",c);

	return 0;
}