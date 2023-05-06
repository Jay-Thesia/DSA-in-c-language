#include <stdio.h>

// 2 0 1 8 6 7 4 3 5
// 2 0 6 3 4 
int verterxNo;
int q[10] ={0} ;
int visited[10] = {0};
int i, j;
int f = 0, r = -1;
int intialver;
int a[20][20];

void bfs(int vertex)
{
    for (i = 1; i <= verterxNo; i++)
    {
        if (a[vertex][i] == 1 && !visited[i])
        {
            q[++r]=i;
        }
    }
        if(f<=r){
            visited[q[f]]=1;
            bfs(q[f++]);
        }
    
}

int main()
{

    printf("Enter the nember of vertex : ");
    scanf("%d", &verterxNo);

    
    printf("Enter the adjacent vertex:\n");

    for (int i = 1; i <= verterxNo; i++)
    {
        for (int j = 1; j <= verterxNo; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the starting vertex");
    scanf("%d",&intialver);
    
    bfs(intialver);
    printf("Reachable vertexs are:");
    for (i = 1; i <= verterxNo; i++)
    {
        if(visited[i])
        printf("\t%d\t",i);
       
    }

    return 0;
}

