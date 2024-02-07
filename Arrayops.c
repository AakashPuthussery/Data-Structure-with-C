#include<stdio.h>

int arr[100];
int size=0;

void displaymenu();
void createarr();
void insertarr();
void displayarr();
void deletearr();
void traversalarr();
void sumarr();
void productarr();

int main()
{
	int choice;
	
	do
	{
		displaymenu();
		printf("Enter your choice: ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				createarr();
				break;
/*			case 2:
				insertarr();
				break;                */
			case 3:
				deletearr();
				break;                    
			case 4:
				displayarr();
				break;
	/*		case 5:
				traversalarr();
				break;
			case 6:
				sumarr();
				break;
			case 7:
				productarr();
				break;                                 */
			case 8:
				printf("Exiting the program\n");
				break;
			default:
				printf("Invalid choice. Please try again\n");
		}
	}
	while(choice!=0);
	return 0;
}

void displaymenu()
{
	printf("\n.....Menu.......\n");
	printf("1. Create Array\n");
	printf("2. Insert Element\n");
	printf("3. Delete Element\n");
	printf("4. Display Elements\n");
	printf("5. Traversal Elements\n");
	printf("6. Sum of Arrays\n");
	printf("7. Product of Arrays\n");
	printf("8. Exit\n");
}

void createarr()
{
	printf("Enter the size of an array:");
	scanf("%d",&size);
	
	printf("Enter %d elements:\n",size);
	for(int i=0;i<size;i++)
	
	{
		scanf("%d",&arr[i]);
	}
}

void displayarr()
{
	printf("Elements of Array is: ");
	for(int i=0;i<size; i++)
		{
			printf("%d\t",arr[i]);
		}
	printf("\n");
}
 
void deletearr()
{
	 int pos;
	 
	 printf("Enter the position of element to be deleted: ");
	 scanf("%d",&pos);
	 
	 if(pos<1 || pos>size)
	 {
	 
	 	printf("Invalid Position\n");
	 	return;
	 }
	 
	for(int i=pos-1;i<size-1;i++)
	{
		arr[i]=arr[i+1];
	}
	size--;
	
	printf("Elements deleted successfully.\n");
	
	printf("size after %d\n", size);
}




















































