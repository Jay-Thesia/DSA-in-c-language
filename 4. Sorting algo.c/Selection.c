#include <stdio.h>
#define size 5

void selectionsort(int *a)
{
    int min, temp;

    
    for (int i = 0; i <= size - 1; i++)
    {
        printf("the iteration is %d ", i + 1);
        
        min = i;

        for (int j = i + 1; j <= size - 1; j++)
        {
            if (a[j] < a[min])
            {
                // count++;
                min = j;
            
            }
        }
        if (a[i] != min)
        {
            //count++;
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
         }
        // if (issort)
        //     return;
    }
}

void display(int *a)
{
    for (int i = 0; i <= size - 1; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{

    // printf("enter the size please\n");
    // scanf("%d",&size);
    // it is adaptive(sorted lesss time),stable(order same ),inplace(more ip no more space)

    int a[size];
    int temp, i, j;
    for (int i = 0; i < size; i++)
    {
        printf("enter the elements \n");
        scanf("%d", &a[i]);
    }

    display(a);
    selectionsort(a);
    display(a);

    return 0;
}