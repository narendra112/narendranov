 #include<stdio.h>
void main()
{
    int number,ch ;
    printf("enter a number = \t");
    scanf("%d",&number);
    printf("menu \n");
    printf("1.square of number \n");
    printf("2.cube of number \n");
    printf("enter a choice =\n");
    scanf("%d",&ch);
    
        switch(ch)
        {
            case 1 :
            printf("square is = %d \n",number*number);
            break;
            case 2:
                printf("cube is = %d \n",number*number*number);
                break;
            default:
                        printf("you enter wrong choice \t");
        }            
     }
