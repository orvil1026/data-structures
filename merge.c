#include<stdio.h>



int main()
{
	int i,j,m,n,sum;
	int a[10],b[10];
	
	
	printf("Program for merging two arrays:\n");
	
	/*inputing 1st array*/
	printf("Enter the length of first array:");
	scanf("%d",&m);
	
	for(i=0;i<m;i++)
	{
		printf("Enter the value:");
		scanf("%d",&a[i]);
	}
	/*inputing 2nd array*/
	printf("Enter the length of second array:");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter the value:");
		scanf("%d",&b[i]);
	}
	
	
	/*merging arrays*/
	
	sum=m+n;
	
	for(i=m,j=0;i<sum;i++,j++)
	{
		
		a[i]=b[j];
		
	}


	/*Outputting the result*/
	printf("The result is :\n");
	for(i=0;i<sum;i++)
	{
		printf("%d ",a[i]);
	
	}


}

