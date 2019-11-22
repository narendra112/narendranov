#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *start=NULL;
void createlist(); 
void displaylist();
int length();
void addatbeg();
void search(struct node *start,int data);
struct node *reverse(struct node *start);
struct node *addatend(struct node *start,int data);
void delete();
void main()
{
	int ch,data;
	while(1)
	{
		printf("\n\n");
		printf("1.create a list\n");
		printf("2.display a list\n");
		printf("3.length of a list\n");
		printf("4.search\n");
		printf("6.addatbeg\n");
		printf("8.addatmiddle\n");
		printf("7.delete a list\n");
		printf("5.reverse a node\n");
		printf("9.addatend\n");
		printf("10.exit\n");
		printf("Enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 :
				createlist();
				break;
			case 2 :
				displaylist();
				break;
			case 3 :
				length();
				break;
			case 4:
				printf("Enter element to be searched\n");
				scanf("%d",&data);
				search(start,data);
				break;
			case 5:
				start=reverse(start);
				break;
			case 6:
				addatbeg();
				break;
			case 9 :
				printf("Enter data\n");
				scanf("%d",&data);
				addatend(start,data);
				break;
						case 7:
						delete();
				/*		break;
						case 7:
						reverse();
						break;*/
			case 10 : exit(1);
			default :
				  printf("Please enter correct choice\n");
		}
	}
}
void createlist()
{
	printf("\n\n");
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter data\n");
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(start==NULL)
	{
		start=temp;
	}
	else
	{
		struct node *p;
		p=start;
		while(p->link!=NULL)
		{
			p=p->link;
		}
		p->link=temp;
	}
}
void displaylist()
{
	printf("\n\n");
	struct  node *p;
	if(start==NULL)
	{
		printf("List is empty\n");
		return;
	}
	p=start;
	printf("the list is:");
	while(p->link!=NULL)
	{
		printf("%d->",p->data);
		p=p->link;
	}
}
int length()
{
	int count=0;
	printf("\n\n");
	struct node *p;
	p=start;
	while(p->link!=NULL)
	{
		count++;
		p=p->link;
	}
	printf("Count=%d\n",count);
	return count;
}
void search(struct node *start,int data)
{
	struct node *p;
	p=start;
	int pos=1;
	while(p!=NULL)
	{
		if (p->data==data)
		{
			printf("%d is found %d location\n",data,pos);
			return;
		}
		p=p->link;
		pos++;
	}
	printf("%d not found\n",data);
}
void addatbeg()
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data:");
	scanf("%d",&temp->data);
	temp->link=start;
	start=temp;
}
struct node *reverse(struct node *start)
{
	struct node *prev,*next,*p;
	prev=NULL;
	p=start;
	while(p!=NULL)
	{
		next=p->link;
		p->link=prev;
		prev=p;
		p=next;
	}
	start=prev;
	return start;
}
struct node *addatend(struct node *start,int data)
{
	struct node *p,*temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=data;
	p=start;
	while(p->link!=NULL)
		p->link=p;
	temp->link=NULL;
	return start;
}
void delete()
{
int n;
printf("Enter which data to delete\n");
scanf("%d",&n);
if (n>length())
{
printf("No memory is allocated\n");
}
else if(n==1)
{
struct node *temp;
temp=start;
start=temp->link;
free(temp);
}
else
{
int i=1;
struct node *p,*q;
p=start;
while(i<n-1)
{
p=p->link;
i++;
}
q=p->link;
p->link=q->link=NULL;
free(q);
}
}
