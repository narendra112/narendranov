#include<stdio.h>
int myfunction(int a, int b){
return (a*b);

}
int main()
{
int x,y;
printf("enter two numbers\n");
scanf("%d %d",&x, &y);

int prod;
prod=myfunction(x,y);
printf("product=%d\n",prod);
}
