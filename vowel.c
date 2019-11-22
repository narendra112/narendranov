#include <stdio.h>
int main()
{
    char c;
    int i ;

    printf("Enter an alphabet: ");
    scanf("%c",&c);

     if( (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') && (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'))

	
	{
        printf("%c is a vowel.", c);
	}
    else if (c!='a' && 'z' && 'A' && 'Z') 
	{
        printf("%c is a consonant.", c);
	}
	else if ((i >= '0') && (i <= '9'))
 	{
	printf("number");
	}
	else
	printf("enter correct");
}
