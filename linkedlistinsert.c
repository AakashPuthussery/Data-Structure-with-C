#include<stdio.h>
#include<stdlib.h> 
struct Node
{
  int data;
  struct Node *next;
};
 void insert(struct Node **head, int data)
 {
 struct Node *newnode= (struct Node*) malloc(sizeof(struct Node));
 newnode ->data=data;
 newnode ->next = *head;
 *head = newnode;
 }
void display(struct Node *node)
{
  while(node != NULL)
  {
  printf("%d",node->data);
  node = node->next;
  }
}
int main()
{
 struct Node *head = NULL;
 struct Node *node2 = NULL;
 struct Node *node3 = NULL;
 struct Node *node4 = NULL;
 
 head = (struct Node *) malloc ( sizeof(struct Node));
 node2 = (struct Node *) malloc ( sizeof(struct Node));
 node3 = (struct Node *) malloc ( sizeof(struct Node));
 node4 = (struct Node *) malloc ( sizeof(struct Node));
 
 head->data= 10;
 head->next= node2;
 
 node2->data =20;
 node2->next= node3;
 
 node3->data =30;
 node3->next= node4;
 
 node4->data =40;
 node4->next= NULL;
 printf("linked list before insertion");
  display(head);
  insert(&head,50);
 printf("linked list after insertion");
  display(head);
 return 0;
}
 
 

