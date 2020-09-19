#include<stdio.h>


int main()
{
	int i,a[10],len,element,pos;
	
	
	printf("Program to insert element into array:");
	
	
	/*inputting the array*/
	
	printf("\nEnter the size of the array:");
	scanf("%d",&len);
	
	for(i=0;i<len;i++)
	{
	
		printf("Enter the element:");
		scanf("%d",&a[i]);
	
	
	}
	
	/*inserting the element*/
	printf("Enter the element and position to be inserted:");
	scanf("%d %d",&element,&pos);
	
	
	for(i=(len-1);i>=(pos-1);i--)
	{
		a[i+1]=a[i];
	
	
	}
	
	a[pos-1]=element;
	
	/*Output*/
	for(i=0;i<=len;i++)
	{
	
		printf("%d \t",a[i]);
		
	
	
	}
	
	
	
		




}

