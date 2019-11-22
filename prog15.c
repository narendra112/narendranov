//Write a C program to enter marks of five subjects and calculate total, average and percentage //
#include<stdio.h>
void main()
{
	int math,sci,eng,hindi,kan,total;
	float average,percentage;
	printf("enter marks of 5 subjects\n");
	scanf("%d %d %d %d %d",&math,&sci,&eng,&hindi,&kan);
	total=math+sci+eng+hindi+kan;
	average=total/5.0;
	percentage=((total/500.0)*100);
	printf("total of marks in sub=%d\naverage of marks=%f\npercentage of marks=%f\n",total,average,percentage);
}
