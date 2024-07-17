//Write C Program to accept novel information (novelid, novelname, and price) and display it using pointers and user defined function.
#include<stdio.h>
struct novel
{
	int nid;
	char n_name[20];
	int price;
}n;
void display(struct novel *);
void main()
{	
	printf("\n ENTER THE NOVEL DETAILS :\n");
	printf("\n Enter the novel id : ");
	scanf("%d",&n.nid);
	printf("\n Enter the name of the novel : ");
	scanf("%s",n.n_name);
	printf("\n Enter the price of the novel : ");
	scanf("%d",&n.price);
	printf("\n THE NOVEL DETAILS ARE :\n ");
	display(&n);
	
}
void display(struct novel *ptr)
{
	printf("\n Novel_id =%d , Novel_name =%s , Novel_price =%d",ptr->nid,ptr->n_name,ptr->price);
}
