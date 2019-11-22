/*Write a C program to input basic salary of an employee and calculate its Gross
salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%*/
#include<stdio.h>
void main()
{
	float basic_sal,gross_sal,hra,da;
	printf("enter basic salary\n");
	scanf("%f",&basic_sal);
	if (basic_sal<=10000)
	{
	hra=(basic_sal * .2);
	da=(basic_sal * .8);
	}
	else if(basic_sal<=20000)
	{
	hra=(basic_sal * .25);
	da=(basic_sal * .90);
	}
	else if(basic_sal>20000)
	{
	hra=(basic_sal * .30);
	da=(basic_sal * .95);
	}
	gross_sal=basic_sal+hra+da;
	printf("gross salary=%.2f\n",gross_sal);
}
