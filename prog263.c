#include<stdio.h>
void main()
{
	char a[100];
	int alp,dig,oth,i;
	alp=dig=oth=i=0;
	printf("Enter any value\n");
	scanf("%s",a);
	while(a[i]!='\0')
	{
		if((a[i]>='a' && a[i]<='z')||(a[i]>='A' && a[i]<='Z'))
		{
			alp++;
		}
		else if(a[i]>='0' && a[i]<='9')
		{
			dig++;
		}
		else
		{
			oth++;
		}
		i++;
	}
	printf("alphabet=%d\n",alp);
	printf(" digit=%d\n",dig);
	printf("others=%d\n",oth);
}

