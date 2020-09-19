#include<stdio.h>
#include<stdlib.h>
#define size 5

int queue[size];
int front=-1;
int rear=-1;
int i;

void insert(int value);
void peep();
void delete();
void display();

int main()
{
	int choice,val;
	
	while(1)
	{
		printf("\n1)Insert 2)Peep 3)Delete 4)Display 5)Exit\nChoose the option:");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("Enter the value to be entered:");
				scanf("%d",&val);
				insert(val);
				break;
			case 2:
				peep();
				break;
			case 3:
				delete();
				break;
			case 4:
				display();
				break;
			case 5:
				exit(0);
			default:
				printf("Invalid choice!!!");
		}
	
	
	}



}
void insert(int value)
{
	if(rear==-1)
	{
		front=rear=0;
		queue[rear]=value;
	
	}
	else
	{
		if(rear==size-1)
		{
			printf("The queue is full.");
		}
		else
		{
			rear++;
			queue[rear]=value;
		} 
	}


}


void peep()
{
	if(front==-1)
	{
		printf("The queue is empty! ");
	}
	else
	{
		printf("The element is %d",queue[front]);
	}

}

void delete()
{
	if(front==-1)
	{
		printf("The queue is empty!");
	}
	else
	{	
		printf("Deleted element is %d",queue[front]);
		front++;
		if(front==rear)
		{
			front=rear=-1;
		}
		
		
	}	 

}


void display()
{
	if(front==-1)
	{
		printf("The queue is empty.");
	
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("%d\t",queue[i]);
		}
	
	
	}



}





