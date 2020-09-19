#include<stdio.h>


int main()
{
	int len,a[10],i,j,choice,large,temp;
	
	printf("Enter the length of the array:");
	scanf("%d",&len);
	
	for(i=0;i<len;i++)
	{
		printf("Enter the value:");
		scanf("%d",&a[i]);
		
	}
	
	
	for(i=0;i<len-1;i++)
	{
		for(j=0;j<len-1;j++)
		{
			if(a[j+1]>a[j])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			
			}
		}
	}
	
	for(i=0;i<len;i++)
	{
		printf("%d\t",a[i]);
		
		
	}
	


}

