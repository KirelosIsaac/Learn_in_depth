/*
 * main.c
 *
 * Created: 09/03/2023
 * Author: Kirelos Isaac
 * ------------------------------------------------------------------------
 * A program act as simple calculator with available operators(+,-,*,/) and 
 * with special condision for dividing by zero "Can't devide by zero"
 * ------------------------------------------------------------------------
*/


#include<stdio.h>

int main()
{
	char operator;
	float num1,num2;

	printf("Available operators(+,-,*,/)\nPlease, Enter the 1st number then the operator then the 2nd number:\n");
	scanf("%f %c %f",&num1,&operator,&num2);

	switch(operator)
	{
		case '+': {printf("%.2f %c %.2f = %.2f",num1,operator,num2,num1+num2);}
		break;
		case '-': {printf("%.2f %c %.2f = %.2f",num1,operator,num2,num1-num2);}
		break;
		case '/': { if(num2==0)
						{
							printf("Can't devide by zero");
						}
						else
						{
							printf("%.2f %c %.2f = %.2f",num1,operator,num2,num1/num2);
							
						}	
				  }
		break;
		case '*': {printf("%.2f %c %.2f = %.2f",num1,operator,num2,num1*num2);}
		break;
		default: printf("Error! Wrong Operator");
	}
	
	return 0;
}