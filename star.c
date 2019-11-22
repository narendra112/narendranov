#include<stdio.h>
int main()
{
int n,i,j,c=80;
scanf ("%d",&n);
for (i=1; i<=n;i++)
{
for(j=i;j<=c/2-i;j++)
{
printf(" ");
}
for (int k=1;k<=2*i-1;k++)
{
printf("*");
}

printf("\n");
}
for (i=1; i<=n;i++)
{
for(j=i;j<=c/2-i;j++)
{
printf(" ");
}
for (int k=1;k<=2*i-1;k++)
{
printf("*");
}
for(j=1;j<=2;j++)
printf("*");

}
printf("\n");


}
