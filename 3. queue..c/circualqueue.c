#include<stdio.h>
#include<stdlib.h>

typedef struct  circularqueue
{
    int size;
    int f;
    int r;
    int *arr;

}cq;

cq queue;

// (cq->r+1)%cq->size-1;

int isfull(cq*q){
    if((q->r+1)%q->size==q->f)
        return 1;
    else
    {
        return 0;
    }
    
}

int isempty(cq*q){

    if(q->f==q->r)
        return 1;
    else
    {
        return 0;

    }

    }

char enqueue(cq *q,int val){
    if(isfull(q))
        printf("queue is overflow\n");

    else{
        q->r=(q->r+1)%q->size;
        q->arr[q->r]=val;
        printf("%c is enqueued\n",val);
    }
}

char dequeue(cq*q){
    int a;
    if (isempty(q))
    {
        printf("the queue is empty\n");
    }
    else{
        q->f=(q->f+1)%q->size;
        a=q->arr[q->f];                    
        printf("%c is dequeue from the queue\n",a);

    }
    
}

char display(){
    char i;
        
        
        i=queue.f;
       while (i!=(queue.r))
       {
           printf("%c ",i);
           i=(i+1)/queue.size;
       }
       
        

    
}
 


    int main(){

        queue.size=5;
        queue.f=queue.r=0;
        queue. arr=(int*)malloc(queue.size*sizeof(int));
        // enqueue(&queue,18);
        // enqueue (&queue,3);
        // enqueue (&queue,7);
        // enqueue (&queue,42);
        // enqueue (&queue,66);
        
        // dequeue(&queue);
        // enqueue (&queue,43);
        // enqueue(&queue,76);

         enqueue(&queue,'a');
    enqueue(&queue,'b');
    enqueue(&queue,'c');
    dequeue(&queue);
      enqueue(&queue,'d');
        enqueue(&queue,'e');
          enqueue(&queue,'f');
         display();

    dequeue(&queue);
   
    return 0;
}