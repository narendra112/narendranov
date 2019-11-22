#include<stdio.h>
void main()
{
        char vowel;
        printf("ENter a char: \n");
        scanf("%c",&vowel);
        switch(vowel)
        {
                case 'a':
                        printf("A is vowel");
                        break;
                default:
                        printf("Error\n");
        }
}
