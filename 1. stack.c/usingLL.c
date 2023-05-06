#include<stdio.h>
#include<stdlib.h>


typedef struct usingLL
{
    int data;
    struct usingLL *next;
    
    
}stackLL;

stackLL* top=NULL;


stackLL push(int data){

    stackLL*temp;
  
    temp=(stackLL*)malloc(sizeof(stackLL));
      temp ->data=data;
    temp->next=top;
    top=temp;
    printf("%d is pushed\n",temp->data);
}

int pop(){

    stackLL*temp;

    if(top==NULL){
        printf("no element to delete\n");

    }
    else{
    temp=top;
    top=top->next;
    temp->next=NULL;
       printf("   %d is deleted\n",temp->data);
    free(temp);
 
    

    }

}

int traversal(){

    stackLL* temp;
    while(temp->next!=NULL){
    temp=top;
    top=top->next;
    printf(" %d is left\n",temp->data);

    }

}





int main(){

        push(32);
        push(45);
        push(89);
        pop();
        pop();
        push(89);
        traversal();

    

    return 0;
}