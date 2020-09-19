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
node * delete_end(node *);
node * delete_beg(node *);
node * delete_at(node *);
node * delete_after(node *);
node * delete_before(node *);


int main()
{
	struct node *start=NULL;
	int choice;
	
	while(1)
	{	
		printf("\n1)delete_beg 2)delete_end 3)delete_before 4)delete_After 5)delete_at 6)Display 7)Exit 8)Create linked list\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				start=delete_beg(start);
				break;
			case 2:
				start=delete_end(start);
				break;	  
			case 3:
				start=delete_before(start);
				break;
			case 4:
				start=delete_after(start);
				break;
			case 5:
				start=delete_at(start);
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


node * delete_beg(node * start )
{
	node *ptr;
	if(start==NULL)
	{
		printf("Linked list is empty.");
	}
	else
	{
		ptr=start;
		start=ptr->next;
		free(ptr);
		count--;
	}
	return start;



}

node * delete_end(node * start)
{
	node *ptr,*preptr;
	ptr=start;
	preptr=start;
	if(start==NULL)
	{
		printf("THe linked list is empty.");
	}
	while(ptr->next!=NULL)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	free(ptr);
	preptr->next=NULL;
	return start;


}

node * delete_before(node * start)
{
	node * ptr,* preptr;
	int val;
	
	printf("Enter the value:");
	scanf("%d",&val);
	preptr=ptr=start;
	if(start==NULL)
	{
		printf("List is empty.");
	}
	else
	{	
		if(ptr->data==val)
		{
			printf("It is the first element.");
			return start;
		}
		if(ptr->next->data==val)
		{
			start=preptr->next;
			free(ptr);
			count--;
		}
		else
		{
			while(ptr->next!=NULL&&ptr->next->data!=val)
			{
				preptr=ptr;
				ptr=ptr->next;	  
			}
			if(ptr->next==NULL)
			{
				printf("ELement not found.");
			}
			else
			{
				preptr->next=ptr->next;
				free(ptr);
			}
			count--;
		}
	
	}
	return start;


}


node * delete_after(node * start)
{
	node * ptr,* preptr;
	int val;
	printf("Enter the value:");
	scanf("%d",&val);
	ptr=start;
	preptr=ptr;
	if(ptr==NULL)
	{
		printf("List is empty.");
		
	}
	else if(ptr->data==val)
	{
		preptr=ptr->next;
		ptr->next=preptr->next;
		free(preptr);
		         
	}
	else
	{	
		
		while(preptr->data!=val && ptr->next!=NULL)
		{
			preptr=ptr;
			ptr=ptr->next;	  
		}
		 if(ptr->data==val && ptr->next==NULL)
		{
			printf("NO ELEMENT AFTER THE GIVEN VALUE.");
		
		}
		else if(ptr->next==NULL && preptr->data==val)
		{
			preptr->next=NULL;
			free(ptr);
		}
		
		else if(preptr->data==val)
		{
			
			preptr->next=ptr->next;
			free(ptr);
			count--;
			
		}
		else
		{
			printf("NOT FOUND.");
		}
		
	}
	return start;

}


node * delete_at(node * start)
{
	node * ptr,*preptr;
	int count=1,pos;
	printf("Enter the position :");
	scanf("%d",&pos);
	
	if(start==NULL)
	{
		printf("The Linked list is empty.");
	
	}
	
	if(pos==1)
	{
		ptr=start;
		start=ptr->next;
		free(ptr);
	}
	else
	{
		ptr=preptr=start;
		while(ptr!=NULL && count<pos)
		{
			count++;
			preptr=ptr;
			ptr=ptr->next;
			
		}
		if(pos==count)
		{
			preptr->next=ptr->next;
			free(ptr);
		}
		else
		{
			printf("Position does not exist");
		}
	
	}
	return start;


}

node * createlist(node * start)
{	
	int x=1,val;
	node *ptr;
	printf("Enter 10 values:\n");
	while(x<=10)
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
			x++;
		

	}
	return start;
	
}

