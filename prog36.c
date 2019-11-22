/*Write a C program to input marks of five subjects Physics, Chemistry, Biology,
Mathematics and Computer. Calculate percentage and grade according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F*/
#include<stdio.h>
void main()
{
	int physics,chemistry,biology,math,comp;
	float total,per;
	printf("enter marks physics\nchemistry\nbiology\nmaths\ncomp\n");
	scanf("%d %d %d %d %d",&physics,&chemistry,&biology,&math,&comp);
	per =(physics+chemistry+biology+math+comp)/5.0;
	
	printf("percentage=%f\n",per);
	if(per>=90)
	{
	printf("Grade A\n");
	}
	else if(per>=80)
        {
        printf("Grade B\n");
        }
	else if(per>=70)
        {
        printf("Grade C\n");
        }
	else if(per>=60)
        {
        printf("Grade D\n");
        }
	else if(per>=40)
        {
        printf("Grade E\n");
        }
	else if(per<40)
        {
        printf("Grade F\n");
        }


}

