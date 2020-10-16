#include<stdio.h>
#include<conio.h>


void Quick(int a[],int low,int high,int n);
int Partition(int a[],int low,int high);
void swap(int a[],int *i,int *j);
int z=1;


void main()
{
int n,i,a[100];
clrscr();
 printf("Enter the no of elements\n");
 scanf("%d",&n);
 printf("Enter elements\n");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 Quick(a,0,n-1,n);

 getch();

}


void Quick(int a[],int low,int high,int n)
{
 int m,i;
 if(low<high)
 {
 m=Partition(a,low,high);


 printf("\n Pass %d: ",z);
 z++;
 for(i=0;i<n;i++)
 {
 printf("%d ",a[i]);
 }


 Quick(a,low,m-1,n);
 Quick(a,m+1,high,n);
 }
}

int Partition(int a[],int low,int high)
{
 int pivot=a[low],i=low,j=high;
  while(i<=j)
  {
   while(a[i]<=pivot)
   i++;
   while(a[j]>pivot)
   j--;

   if(i<j)
   swap(a,&i,&j);
  }
 swap(a,&low,&j);
 return j;
}

 void swap(int a[],int *i,int *j)
{
int temp;
temp=a[*i];
a[*i]=a[*j];
a[*j]=temp;
}