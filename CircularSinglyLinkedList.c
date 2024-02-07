#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
void push(struct node** head_ref,int data)
{
	struct node* ptr1=(struct node*)malloc(sizeof(struct node));
	ptr1->data=data;
	ptr1->next=*head_ref;
	
	if(*head_ref!=NULL){
		
		struct node* temp= *head_ref;
		while(temp->next!=*head_ref)
			temp=temp->next;
		temp->next=ptr1;
	}
	else
		ptr1->next=ptr1;
	*head_ref=ptr1;
}
void printlist(struct node* head)
{
	struct node* temp=head;
	if(head!=NULL){
	
		do{
			printf("%d",temp->data);
			temp=temp->next;	
		}while(temp!=head);
	}
	printf("\n");
}
void deleteNode(struct node** head,int key)
{
	if(head==NULL)
		return;
	if((*head)->data==key && (*head)->next == *head) {
		free(*head);
		*head=NULL;
		return;
	}
	
	struct node *last = *head, *d;
	if((*head)->data=key){
		
		while(last->next != *head)
			last = last->next;
		last->next = (*head)->next;
		free(*head);
		*head = last->next;
		return;
		
	}
	 while(last-> next!= *head && last->next->data!=key){
	 	last=last-key;
	 }
	 if(last->next->data==key){
	 	d=last->next;
	 	last->next=d->next;
	 	free(d);
	 }
	 else
	 	printf("Given node is not found in the list \n");
}
int main()
{

struct node* head = NULL;
int choice,value,key;
while(1){
	printf("1.List\n2.List before deleteion\n3.Print After deleteion\n4.Quit\n");
	printf("Enter your choice");
	scanf("%d",&choice);
	
	
	   switch (choice) {
            case 1:
                printf("Enter a value to push: ");
                scanf("%d", &value);
                push(&head, value);
                break;
            case 2:
                printf("Enter a value to delete: ");
                scanf("%d", &key);
                deleteNode(&head, key);
                break;
            case 3:
                printf("Current list: ");
                printlist(head);
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
			
		
/*	struct node* head=NULL;
	push(&head,2);
	push(&head,5);
	push(&head,7);
	push(&head,8);
	push(&head,10);
	printf("list before deletion:");
	printlist(head);
	deleteNode(&head,7);
	printf("List after deleteion:");
	printlist(head);
	return 0;
}*/
	 
		

