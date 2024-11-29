//Q. .2 Write a C program to search given element using recursive binary search algorithm

#include<stdio.h>
int main()
{
	int a[10],i,n,val,pos,low,upp;
	low=0;
	upp=n-1;
	int b_search(int[],int,int,int);
	void sort(int[],int);
	printf("\n Enter size:");
	scanf("%d",&n);
	printf("\n Enter valueS:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Enter value to search:");
	scanf("%d",&val);
	sort(a,n);
	pos=b_search(a,val,0,n-1);
	if(pos!=1)
	{
		printf("value present at%d",pos+1);
	}
	else
	{
		printf("\n value not found:");
	}	
}
void sort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				
			}
		}
	}
}
int b_search(int a[],int val,int low,int upp)
{
	int mid;
	if(low<=upp)
	{
		mid=(low+upp)/2;
		if(val==a[mid])
		return (mid);
		else if(val<a[mid])
		upp=mid-1;
		else if(val>a[mid])
		low=low+1;
		
		
	}return(-1);
}
