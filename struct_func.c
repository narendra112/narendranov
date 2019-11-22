//program for struct using function
#include<stdio.h>
#include<string.h>
struct kill
{
	int id;
	char name[20];
	float per;
};

void func(struct kill student);
void main()
{
	struct kill student;
	student.id=1;
	strcpy(student.name,"Narendra");
	student.per=65.34;
	func(student);
}
void func(struct kill student)
{
	printf("id=%d\n",student.id);
	printf("name=%s\n",student.name);
	printf("per=%f\n",student.per);
}
