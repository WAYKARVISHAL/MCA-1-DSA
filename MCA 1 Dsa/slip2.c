//.2 Write a C program to read and display graph using matrix and find in-degree and out-degree of graph.

#include <stdio.h>
int main()
{
	int i,j,n;
	printf("\n Enter the number of vertices:");
	scanf("%d",&n);
	int adj[n][n];
	int in_degree[n], out_degree[n];
	for(i=0;i<n;i++)
	{
		in_degree[i]=0;
		out_degree[i]=0;
	}
  	printf("enter the adjency maxtrix (nxn)");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&adj[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(adj[i][j]==1)
			{
				out_degree[i]++;
				in_degree[j]++;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("vertex %d:indegree=%d,outdegree:%d\n:",i+1,in_degree[i],out_degree[i]);
	}
  	return 0;
}
