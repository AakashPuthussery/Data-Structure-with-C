
#include <stdio.h>
#include <stdlib.h>

struct node {
	int info;
	struct node *prev, *next,*start;
};
struct node* start = NULL;

void traverse()
{
	if (start == NULL) {
		printf("\nList is empty\n");
		return;
	}
	struct node* temp;
	temp = start;
	while (temp != NULL) {
		printf("Data = %d\n", temp->info);
		temp = temp->next;
	}
}
