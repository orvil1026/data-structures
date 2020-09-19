#include<stdio.h>



int main()
{
	int i,a[10],len,element,pos,c=0;
	
	
	printf("Program to delete element into array:");
	
	
	/*inputting the array*/
	
	printf("\nEnter the size of the array:");
	scanf("%d",&len);
	
	for(i=0;i<len;i++)
	{
	
		printf("Enter the element:");
		scanf("%d",&a[i]);
	
	
	}
	
	/*deleting the element*/
	printf("Enter the element to be deleted:");
	scanf("%d",&element);
	
	while(c==0)
	{
		printf("Enter the element to be deleted:");
		scanf("%d",&element);
		for(i=0;i<len;i++)
		{
			if(a[i]==element)
			{
				pos=i;
				c++;
				break;
			}
		}
	}
	
	for(i=(pos);i<=(len-2);i++)
	{
		a[i]=a[i+1];
	
	
	}
	
	
	
	/*Output*/
	for(i=0;i<len-1;i++)
	{
	
		printf("%d \t",a[i]);
		
	
	
	}
	



}

