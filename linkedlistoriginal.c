#include <stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node* next;
};
struct node *head, *newnode, *temp, *prev;
struct node* ins(struct node *head, int data)
{
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=NULL;
	if(head==0)
	{
		newnode->next=head;
		return newnode;
	}
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
		
		
	}
	temp->next=newnode;
return head;
}
struct node* insert(struct node *head, int data, int pos)
{
	int i=1;
	if(pos<1)
	{
		printf("invalid position");
		return head;
	}
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=NULL;
	if(pos==1)
	{
		newnode->next=head;
		return newnode;
	}
	temp=head;
	prev=0;
	while(i<pos && temp!=NULL)
	{
		prev=temp;
		temp=temp->next;
		i++;
		
		}
	if(i<pos)
	{	
		printf("out of Range");
		free(newnode);
		return head;
		}
	prev->next=newnode;
	newnode->next=temp;
	return head;
}
struct node* delet(struct node *head, int pos)
{
int i=1;
if (pos<1)
{
	printf("invalid position");
	return head;
	}
if(pos==1)
{
	temp=head;
	head=head->next;
	free(temp);
	return head;
	}
temp=head;
prev=0;
while(i<pos && temp!=0)
{
	prev=temp;
	temp=temp->next;
	i++;
	}
if(i<pos||temp==0)
{
	printf("out of range");
	return head;
	}
prev->next=temp->next;
free(temp);
return head;
};
void display(struct node *head)
{
  temp=head;
  while(temp!=0)
  {
	printf("\n%d\n",temp->data);
	temp=temp->next;
	}
	printf("Null\n");
	}
	int main()
	{
	head=0;
	int ch,data, pos;
	while(1)
	{
		printf("enter the choice\n1.Insert\n2.Insert at the position\n3.Delete\n4 Display\n5.exit");
		scanf("%d",&ch);
		switch(ch)
	{	
		case 1 : printf("enter the data\n:");
			scanf("%d",&data);
			head=ins(head,data);
			break;
		case 2 : printf("enter the data\n");
			scanf("%d",&data);
			printf("enter the position\n");
			head=insert(head,data,pos);
			break;
		case 3 : printf("enter the position \n");
			scanf("%d",&pos);
			head=delet(head,pos);
			break;
			case4: display(head);
			break;
		case 5 : exit(0);
		default: printf("wrong choice\n");
		}
	}
		
	return 0;
}


