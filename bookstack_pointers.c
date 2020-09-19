


/* Stack implementation using Array*/
#include<stdlib.h>
#include<stdio.h>
#define size 5
int top=-1;


typedef struct{
	char name[50];
	int pages;
	float price;


}book;

book stack[size];
void show(book val);
book * pop();
void peep();
void display();
book getbook();
void push(book val);


int main()
{	
	int choice;
	int val;
	book *bp;
	
	
	while(1)
	{
	printf("\n1. Push  2. Pop  3. Peep  4. Display  5. Exit\n Enter your  choice:");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1: 
				
				push(getbook());
				break;
		case 2:bp=pop();
				if(bp!=NULL)
				{
					show(*bp);
				}
				break;
		case 3: peep(); break;
		case 4: display(); break;
		case 5: exit(0);
		default: printf("Enter valid choice!!\n");
		
	}
	}
	return 0;
	
}

void show(book val)
{
	printf("\nBook Name:%s\nNo. of pages:%d\nPrice:%f\n",val.name,val.pages,val.price);
}

void push(book val)
{
	if(top==size-1)
	{
		printf("\nStack Full!!\n");
	}
	else
	{
		top++;
		stack[top]=val;
	}
}

book * pop()
{
	
	if(top==-1)
	{
		printf("\nStack Empty!!\n");
		return NULL;
		
		
	}	 
	else
	{
		return (&stack[top]);
		top--;
	}
}
void peep()
{
	int val;
	if(top==-1)
	{
		printf("\nStack Empty!!\n");
	}
	else
	{
		show(stack[top]);
		
	}
}
void display()
{	int i;
	if(top==-1)
	{
	
		printf("\nStack Empty!!\n");
	}
	else
	{	printf("\nStack elements:\n");
		for(i=top;i>=0;i--)
		{
				show(stack[i]);
		}
	}
}
book getbook()
{	
	book b;
	gets(b.name);
	printf("Enter the name of the book:");
	gets(b.name);
	printf("Enter the no. of pages:");
	scanf("%d",&b.pages);
	printf("Enter the price:");
	scanf("%f",&b.price);	 
	return b;
}

