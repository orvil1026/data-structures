#include<stdio.h>


int main()
{
	int i,j,m,n,temp;
	int a[10][10];
	/*accepting rows and columns*/
	printf("Program to find transpose of a matrix\n");
	printf("Enter m and n:");
	scanf("%d %d",&m,&n);
	
	
	/*inputing the matrix*/
	
	
	for(i=0;i<m;i++)
	{
	
		for(j=0;j<n;j++)
		{
				
			printf("Enter the value:");
			scanf("%d",&a[i][j]);
		
		
		
		}
	
	}
	
	/*transposing*/
	
	for(i=0;i<m;i++)
	{
	
		for(j=i;j<n;j++)
		{
				
			temp=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=temp;
		
		
		
		}
	
	}
	
	
	
	
	
	/*outputing the matrix*/
	for(i=0;i<m;i++)
	{
	
		for(j=0;j<n;j++)
		{
				
			
			printf("%d\t",a[i][j]);
		
		
		
		}
		printf("\n");
	
	}
	
	
	

	return 0;


}

