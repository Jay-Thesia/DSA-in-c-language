#include<stdio.h>

struct priorityqueue
{
    int ele;
    int priority;
}pq[5];

int rear=-1;


int isempty(){

    if(rear==-1)
        return 1;

    else
    {
        return 0;
    }
    
}

int full(){
    if(rear==4)
        return 1 ;
    else
    {
        return 0;
    }
    
}

void insert (int ele,int p){
    rear++;
    pq[rear].ele=ele;
    pq[rear].priority=p;
}

int gethighestpriority(){

    int i,p=-1;
    if(!isempty()){

        for(i=0;i<=rear;i++){

            if(pq[i].priority>p)
                p=pq[i].priority;
        }
    }
    return p;
}

int deletequeue(){

    int i,j,p,ele;
    p=gethighestpriority();
    for(i=0;i<=rear;i++){
        if(pq[i].priority==p){
            ele=pq[i].ele;
            break;
        }

        }
        if(i<rear){

            for(j=i;j<rear;j++){
                pq[j].ele=pq[j+1].ele;
                pq[j].priority=pq[j].priority;
            }
        }
        rear=rear--;

    }


    int display(){

        int i=0,ele;
        while(i!=rear){

            ele=pq[i].ele;
            
            printf("%d\n",ele);
            i++;
        }
          ele=pq[i].ele;
        printf("%d\n",ele);
    }
    int main(){

        insert(13,3);
        insert(34,2);
        insert(12,5);
        display();

    

    return 0;
}