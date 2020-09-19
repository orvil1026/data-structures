#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#define SIZE 50

int getprecedance(char c);
void infixtopostfix(char infix[],char postfix[]);
char infix[SIZE];
char postfix[SIZE];
char stack[SIZE];
int top=-1;
int size=50;

void push(char val)
{
	if(top==size-1)
	{
		printf("Stack is full.");
	}
	else
	{
		top++;
		stack[top]=val;
	}
	
}

char pop()
{
	if(top==-1)
	{
		return;	   
	}
	else
	{
		return stack[top--];
	
	}	   
}


char peep()
{
	if(top==-1)
	{
		return;	   
	}
	else
	{
		return stack[top];
	}
}

int main()
{
	printf("Enter the expression:");
	gets(infix);
	
	strcpy(postfix,"");
	infixtopostfix(infix,postfix);
	
	printf("The Postfix expression is %s",postfix);
	puts(postfix);
	
	return 0;
	
	
	

}


void infixtopostfix(char infix[],char postfix[])
{		int i=0,j=0,len;
		len=strlen(infix);
	   infix[len]=')';
	   infix[len+1]='\0';
	   
	   push('(');
	   
	   while(infix[i]!='\0')
	   {
	   		if(infix[i]=='(')
			{
				push(infix[i]);
			}
			else if(isdigit(infix[i])||isalpha(infix[i]))
			{
				 postfix[j]=infix[i];
				 j++;
			}
			else if(infix[i]==')')
			{
				while(peep()!='(')
				{
					postfix[j++]=pop();	   	   	   	   
				}
				pop();
			
			
			}
			else
			{
				while(getprecedance(peep())>getprecedance(infix[i]))
				{
					
					postfix[j++]=pop();
				
				}
				push(infix[i]);
			
			
			}
			i++;
			
	   
	   }
	   while((top!=-1&&peep()!='('))
	   {
	   		postfix[j++]=pop();
	   }
	   postfix[j]='\0';



}


int getprecedance(char c)
{

	if(c=='*'||c=='/'||c=='%')
	{
		return 2;
	}
	if(c=='+'||c=='-')
	{
		return 1;
	
	}


}






