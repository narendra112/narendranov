//Write a C program to find roots of a quadratic equation using switch case.
#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,d,root1,root2,imaginary;
printf("enter two coeffients and a constant value\n");
scanf("%f%f%f",&a,&b,&c);
d=b*b-4*a*c;
switch(d>0)
{
case 1:
printf("roots are Real\n");
root1=(-b+(sqrt(d))/(2*a));
root2=(-b-(sqrt(d))/(2*a));
printf("the roots are %.3f and %.3f\n ",root1,root2);
break;
case 0:
switch(d<0)
{
case 1:
printf("roots are complex\n");
root1=root2=-b/(2*a);
imaginary=sqrt(-d)/(2*a);
printf("the roots are %.3f+i%.3f and %.3f-%.3f\n",root1,imaginary,root2,imaginary);
break;
case 0:
printf("roots are equal\n");
root1=root2=-b/2*a;
printf("roots are %.3f and %.3f",root1,root2);
break;
}
}



}
