#include <stdio.h>
#include <stdlib.h>
#define n 6

// 7 2 91 77 5 3
//

void display(int *a)
{

    for (int i = 0; i <= n - 1; i++)
    {

        printf("%d ", a[i]);
    }
    printf("\n");
}

int insertionsort(int *a)
{

    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        int w=i;
        for (int j = i + 1; j >= 0; j--)
        {
            if (j < n && w>=0)
            {

                while (a[w] > a[j])
                {

                    temp = a[j];
                    a[j] = a[w];
                     
                    a[w] = temp;
                    
                }
              
                w--;
            }
        }
    }
}


int main()
{

    int *a = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("enter the elements \n");
        scanf("%d", &a[i]);
    }

    display(a);
    insertionsort(a);
    display(a);

    return 0;
}