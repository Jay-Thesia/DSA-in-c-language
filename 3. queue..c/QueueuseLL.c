#include <stdio.h>
#include <stdlib.h>

typedef struct QueueuseLL
{
    int data;
    struct QueueuseLL *next;
    int f;
    int r;
    int *arr;
    int size;
} n;


    n *f = NULL;
    n *r = NULL;

void lltraversal(n *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

int isfull()
{
    n *ptr = (n *)malloc(sizeof(n));
    if (ptr == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isempty()
{
    
    if (f == NULL)
        return 1;
    else
    {
        return 0;
    }
}

int enqueue( int val)
{

    if (isfull())
    {
        printf("ooo ma go full queue\n");
    }
    else
    {
        n *ptr = (n *)malloc(sizeof(n));
        ptr->data = val;
        ptr->next = NULL;
        if (f == NULL)
        {
            f = r = ptr;
        }
        else{
        r->next = ptr;
        r = ptr;
        }
        printf("%d is added\n", r->data);
    }
}

int dequeue()
{
    n*ptr;
    int val;
      ptr=f;
    if(isempty()){
        printf("oh ma go queue empty\n");
    }
    else{
   
  
    val=ptr->data;
    f=f->next;
    printf("the %d is delete \n",val);
    free(ptr);
    
    }

}

int main()
{

    enqueue( 18);
    enqueue( 17);
    enqueue( 17);  
    dequeue();

    return 0;
}