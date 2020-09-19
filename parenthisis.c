#include<stdio.h>
#include<stdlib.h>
#include"charstack.h"


int main()
{
	char exp[50];
	char x,a;
	int i=0;
	printf("Enter the expresion:");
	gets(exp);
	
	
	while(exp[i]!='\0')
	{
		if(exp[i]=='('||exp[i]=='{'||exp[i]=='[')
		{
			push(exp[i]);
		}
		if(exp[i]==')'||exp[i]=='}'||exp[i]==']')
		{
			if(stackisempty())
			{
				printf("It is not well formed.");
				exit(0);
			}
			x=pop();
			
			if(exp[i]==')'&&x!='(')
			{
				printf("It is not well formed.");
				exit(0);
			
			}	 
				if(exp[i]=='}'&&x!='{')
			{
				printf("It is not well formed.");
				exit(0);
			
			}
				if(exp[i]==']'&&x!='[')
			{
				printf("It is not well formed.");
				exit(0);
			
			}	 	   
			
			
			
		}
		i++;
		
		
	}
	if(!stackisempty())
	{
		printf("It is not well formed");
	}
	else
	{
		printf("It is well formed.");
	}
	return 0;

}

