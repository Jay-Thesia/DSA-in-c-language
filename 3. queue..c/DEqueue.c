
#include<stdio.h>
#include<stdlib.h>

typedef struct harryqueue
{
    int size ;
    int f;
    int r;
    int *arr;
}q;

 q queue;

int isfull(){

    if(queue.r==queue.size-1)
        return 1;
    else
        return 0;
    
}

int isempty(){
    if(queue.r==queue.f)
        return 1;
    else
    {
        return 0;
    }
    

}

int dequeueF (q*p){

    int a;
    if(isempty(queue)){
        printf("the queue is full\n");
    }
    else{
        p->f++;
        a=p->arr[p->f];
    }
    printf("%d is dequeued from front\n",a);
    
    
}

int enququeR(q* p,int val){
    
    int i=0;
    if (isfull(queue)){
        printf("the queue is full\n");
            
    }
    else{
    p->r++;
    p->arr[p->r]=val;
   printf("%d is inserted \n",p->arr[p->r]);  
    
    }
}

int display(q*p){
    

    

      if(isempty(queue)){
        printf("the queue is full\n");
    }
    else{

        
        while(p->f!=p->r){
          
            p->f++;
              printf("%d ",p->arr[p->f]);
        }
}
}

int enqueueF(q*p,int val){

    if(p->f==-1){
        printf("the queue is full from front\n");
    }
    else
    {
        
        p->arr[p->f]=val;
        p->f--;
        printf("%d is enqueue from front\n",val);

    }

}
int dequeueR(q*p){
    int val;
    if(isempty()){
        printf("the queue is full\n");

    }
    else
    {
        val=p->arr[p->r];
        p->r--;
        printf("the %d is delete from rear\n",val);

    }
    
}



int main(){

   
    queue.size=4;
    queue.f=-1;
    queue.r=-1;
    queue.arr=(int*)malloc(queue.size*sizeof(int));
    enququeR(&queue,12);
    enququeR(&queue,23);
    enququeR(&queue,45);
    dequeueF(&queue);
    dequeueR(&queue);
    enqueueF(&queue,23);
    enqueueF(&queue,79);
    enququeR(&queue,13);
    enququeR(&queue,83);
    dequeueF(&queue);
    display(&queue);
    
    

    return 0;
}
