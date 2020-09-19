#include<stdio.h>

void factadd();
void demo_2d()
{
}
void swapping()
{

}

int fact(int n);

int main()
{
	int choice;
	printf("Menu: \n 1.Factorial Add \n 2.2d Array Demo\n 3.Swapping\n 4.Exit\n Enter your choice:");
	scanf("%d",&choice);
	
	switch(choice)
	{
	
		case 1:	factadd();
				break;
		case 2: demo_2d();
				break;
		case 3: swapping();
				break;
		case 4:
				break;
		
		default:
			printf("Please enter the correct choice:");
	
	}
	
}

void factadd()
{
	int i,n,sum=0;
	int a[100];
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(i=0;i<n:i++)
	{
		printf("Enter the number:");
		scanf("%d",&a[i]);
		sum=sum+fact(a[i]);	   
	}
	
	printf("Sum of factorials =%d",sum);
	
	


}

int fact(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;

}


						

