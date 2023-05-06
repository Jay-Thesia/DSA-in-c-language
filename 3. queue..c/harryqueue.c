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

int enquque(q* p,int val){
    
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

int main(){

   
    queue.size=4;
    queue.f=-1;
    queue.r=-1;
    queue.arr=(int*)malloc(queue.size*sizeof(int));
    enquque(&queue,12);
    enquque(&queue,23);
    enquque(&queue,45);
    dequeueF(&queue);
    dequeueR(&queue);
    enqueueF(&queue,23);
      enquque(&queue,79);
        enquque(&queue,13);
          enquque(&queue,83);
    dequeueF(&queue);
    display(&queue);
    
    

    return 0;
}