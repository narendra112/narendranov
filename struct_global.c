//struct global declartion
#include<stdio.h>
#include<string.h>
struct kill
{
	int id;
	char name[20];
	float per;
};
typedef struct kill stud;//global declaration
stud student;
void func();
void main()
{
	student.id=1;
	strcpy(student.name,"Narendra");
	student.per=65.34;
	func();
}
void func()
{
	printf("id=%d\n",student.id);
	printf("name=%s\n",student.name);
	printf("per=%f\n",student.per);
}

