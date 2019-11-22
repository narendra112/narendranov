#include <stdio.h>
void draw(void);
void main()
{
draw();
draw();
}
void draw(void)
{
int i;
for(i=1;i<=100;i++)
{
printf("_");
}
}
