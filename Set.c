#include<stdlib.h>
int u[]={1,2,3,4,5,6,7,8,9,10}
void display(int *ar);
int find(int *arr);
int flag=-1;
int main()
{
	int uni[10]={1,1,1,1,1,1,1,1,1,1}
	int a[10]={1,1,1,1,1,0,0,1,1,0}
	int b[10]={0,0,0,0,0,0,0,0,0,1}
	int a_union_b[10],i,p_a=0,p_b=0;
	printf("\n universal set is:\n");
	display(uni);
	printf("\nA is\n");
	display(a);
	
