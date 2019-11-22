//Write a C program to create Simple Calculator using switch case
#include<stdio.h>
void main()
{
	float a,b,c;
	char operator;
	printf("enter any operator + - / *\n");
	scanf("%c",&operator);
	printf("enter two number\n");
	scanf("%f %f",&a,&b);
	switch(operator)
	{	
	case '+':
	c=a+b;
	printf("addition=%f\n",c);
	break;
	case '-':
        c=a-b;
        printf("subtraction=%f\n",c);
        break;
	case '*':
        c=a*b;
        printf("multiply=%f\n",c);
        break;
	case '/':
        c=a+b;
        printf("division=%f\n",c);
        break;
	default:
	printf("invalid input\n");
	}

}
