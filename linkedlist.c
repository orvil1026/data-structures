#include<stdio.h>
#include<stdlib.h>
int count=0;
typedef struct node 
{
	int data;
	struct node *next;


}node;

void display(node *);
node * createlist(node *);
node * insert_end(node *);
node * insert_beg(node *);
node * insert_at(node *);
node * insert_after(node *);
node * insert_before(node *);


int main()
{
	struct node *start=NULL;
	int choice;
	
	while(1)
	{	
		printf("\n1)Insert_beg 2)Insert_end 3)Insert_before 4)Insert After 5)Insert at 6)Display 7)Exit 8)Create linked list\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				start=insert_beg(start);
				break;
			case 2:
				start=insert_end(start);
				break;	  
			case 3:
				start=insert_before(start);
				break;
			case 4:
				start=insert_after(start);
				break;
			case 5:
				start=insert_at(start);
				break;	    
			case 6:
				display(start);
				break;
			case 7:
				exit(0);
			case 8:
				start=createlist(start);
				break;
				
		}
	}


}

void display(node * start)
{
	node * ptr;
	ptr=start;
	
	if(ptr==NULL)
	{
		printf("Linked list empty.");
	}
	else
	{
		printf("\nElements of the list are:");
		while(ptr!=NULL)
		{
			printf("%d ",ptr->data);
			ptr=ptr->next;
		}
	}

}


node * insert_beg(node * start )
{
	node * newnode=(node *)malloc(sizeof(node));
	printf("Enter data:");
	scanf("%d",&newnode->data);
	newnode->next=start;
	start=newnode;
	count++;
	return start;



}

node * insert_end(node * start)
{
	node * ptr;
	node * newnode=(node *)malloc(sizeof(node));
	printf("Enter the data:");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	ptr=start;
	if(start==NULL)
	{
		start=newnode;	  
	
	}
	else
	{
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=newnode;
	
	}
	count++;
	return start;


}

node * insert_before(node * start)
{
	node * ptr,* preptr;
	int val;
	node * newnode=(node *)malloc(sizeof(node));
	printf("Enter the data:");
	scanf("%d",&newnode->data);
	printf("Enter the value:");
	scanf("%d",&val);
	ptr=start;
	while(ptr->data!=val)
	{
		preptr=ptr;
		ptr=ptr->next;	  
	}
	preptr->next=newnode;
	newnode->next=ptr;
	count++;
	return start;


}


node * insert_after(node * start)
{
	node * ptr,* preptr;
	int val;
	node * newnode=(node *)malloc(sizeof(node));
	printf("Enter the data");
	scanf("%d",&newnode->data);
	printf("Enter the value:");
	scanf("%d",&val);
	ptr=start;
	preptr=ptr;
	while(preptr->data!=val)
	{
		preptr=ptr;
		ptr=ptr->next;	  
	}
	preptr->next=newnode;
	newnode->next=ptr;
	count++;
	return start;



}


node * insert_at(node * start)
{
	node * newnode=(node *)malloc(sizeof(node));
	node *ptr,*preptr;
	int n,temp;
	temp=1;
	printf("Enter position at which data is to be entered:");
	scanf("%d",&n);
	
	if(n<0 || n>count)
	{
		printf("The data cannot be entered.");
	}
	else if(n==1)
	{
		start=insert_beg(start);
	}
	else
	{	ptr=start;
		preptr=start;
		printf("Enter the data:");
		scanf("%d",&newnode->data);
		while(ptr!=NULL &&temp!=n )
		{	
			preptr=ptr;
			ptr=ptr->next;
			temp++;
		}
		if(ptr!=NULL)
		{
			newnode->next=ptr;
			preptr->next=newnode;
			
		}
		count++;
	}
	return start;


}

node * createlist(node * start)
{	
	int x=1,val;
	node *ptr;
	while(x!=0)
	{
   	   		node * newnode=(node *)malloc(sizeof(node));
			printf("Enter the value:");
			scanf("%d",&val);
			newnode->data=val;
			if(start==NULL)
			{
				newnode->next=NULL;
				start=newnode;
			}
			else
			{	
				ptr=start;
				while(ptr->next!=NULL)
				{
					ptr=ptr->next;
				}
				ptr->next=newnode;
				newnode->next=NULL;
				
			}
			count++;
			printf("Enter 0 to exit:");
			scanf("%d",&x);

	}
	return start;
	
}

