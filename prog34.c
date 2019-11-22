//quadratic equation
#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,d,root1,root2;
	printf("enter two coeffients and a constant value\n");
	scanf("%f%f%f",&a,&b,&c);
	d=b*b-4*a*c;
	if(d<0)
	{
		printf("roots are complex\n");
		root1=-b/(2*a);
		root2=sqrt(-d/2*a);
		printf("one complex roots are %.3f+i%.3f\n",root1,root2);
		printf("another complex root are %.3f-i%.3f\n",root1,root2);
	}
	else if(d==0)
	{
		printf("both root are equal\n");
		root1=root2=-b/(2*a);
		printf("the roots are %.3f & &%.3f",root1,root2);
	}
	else
	{
		printf("the roots are real\n");
		root1=-b/(2*a);
		root2=sqrt(d/(2*a));
		printf("the roots are %.3f,%.3f",root1,root2);
	}

}
