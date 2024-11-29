//2 Write a program in C to implement the Depth First Search algorithm. Accept the graph as an 
//adjacency matrix.

#include<stdio.h>

#define MAX 10
int adj[MAX][MAX];
int visited[MAX];

void dfs(int vertex, int n);

int main()
{
	int i,j,n;
	printf("\n Enter number of vertices:");
	scanf("%d",&n);
	printf("\n Enter adjency matrix:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&adj[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		visited[i]=0;
	}
	printf("Depet first search stariting from verted 0:\n");
	dfs(1,n);
	return 0;
} 

void dfs(int vertex,int n)
{
	int i;
	visited[vertex]=1;
	printf("%d",vertex);
	 for (i = 0; i < n; i++) {
        if (adj[vertex][i] == 1 && !visited[i]) {
            dfs(i, n);
        }
    }
}
