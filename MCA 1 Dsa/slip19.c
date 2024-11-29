#include<stdio.h>
int main()
{
	int i,n,a[10];
	void insertion_sort(int [],int);
	
	printf("\n enter size:");
	scanf("%d",&n);
	printf("\n Enter value:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	insertion_sort(a,n);
	printf("after sort:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
void insertion_sort(int a[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=a[i];
		for(j=i-1;j>=0;j--)
		{
			if(a[j]>temp)
			{
				a[j+1]=a[j];
			}
			else
			{
				break;
			}
		}a[j+1]=temp;
	}
}
