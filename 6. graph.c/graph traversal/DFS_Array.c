#include <stdio.h>

int a[20][20];
int visited[10] = {0};
int vertexNo;


void dfs(int vertex)
{
    printf("%d",vertex);
    visited[vertex]=1;
    for (int j = 0; j< vertexNo; j++)
    {
        if (!visited[j] && a[vertex][j])
        {
            dfs(j);
        }
    }
}

int main()
{

    printf("enter the total number vertexN0\n");
    scanf("%d", &vertexNo);

    printf("Enter the array of graph:\n");
    for (int i = 0; i < vertexNo; i++)
    {
        for (int j = 0; j < vertexNo; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int initialPoint;

    printf("Enter the starting point");
    scanf("%d", &initialPoint);

    dfs(initialPoint);
   

    return 0;
}