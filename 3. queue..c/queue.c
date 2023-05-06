#include<stdio.h>
#include<stdlib.h>
#define n 5
int main()
{
    int queue[n];
    int ch=1;
    int front=0;
    int rear=0;
    int i;
    int j=1;
    int x=n;
    
    printf("Queue using Array");
    
    printf("\n1.Insertion \n2.Deletion \n3.Display \n4.Exit\n");
    
    while(ch)
    {
        printf("\nEnter the Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            if(rear==x)
                printf("\n Queue is Full");
            else
            {
                printf("\n Enter no %d:",j++);
                scanf("%d",&queue[rear++]);
            }
            break;
        case 2:
            if(front==rear)
            {
                printf("\n Queue is empty");
            }
            else
            {
                printf("\n Deleted Element is %d",queue[front++]);
                x++;
            }
            break;
        case 3:
            printf("\n Queue Elements are:\n ");
            if(front==rear)
                printf("\n Queue is Empty");
            else
            {
                for(i=front; i<rear; i++)
                {
                    printf("%d",queue[i]);
                    printf("\n");
                }
                break;
        case 4:
              exit(0);
              default:
                printf("Wrong Choice");
            }
        }
    }
}