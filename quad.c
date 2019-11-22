#include<stdio.h>
#include<math.h>
void main()
{
	double a,b,c,d,root1,root2;
	printf("enter a,b,c\n");
	scanf("%lf %lf %lf",&a,&b,&c);
	d=b*b -4*a*c;
	root1=(-b+sqrt(d))/(2*a);
	root2=(-b-sqrt(d))/(2*a);
	printf("first root=%lf\n",root1);
	printf("second root=%lf\n",root2);

}
