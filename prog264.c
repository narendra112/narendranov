//Write a C program to count total number of vowels and consonants in a string.
#include<stdio.h>
#include<stdio.h>
void main()
{
	char a[100];
	int vowel=0,constant=0,i,len;
	printf("Enter any word\n");
	scanf("%s",a);
	len=strlen(a);
	while(i<=len)
	{
		if((a[i]>='a'&& a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
		{
			if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
			{
				vowel++;
			}

			else
			{
				constant++;
			}
		}
		i++;
	}
	printf("Vowel=%d\n",vowel);
	printf("Constant=%d\n",constant);
}
