#include<stdio.h>
#include<stdlib.h>


typedef struct node
{
   int data;
   struct node *next;
    struct node *prev;
}dll;

  dll* max(dll* head){
        dll* p=head;
        int m;
        m=p->data;
        p->next;
        while(p->next!=NULL){
            if(p->data>m){
                m=p->data;
            }
            p=p->next;
        }
        printf("the max element is %d\n",m);
        
    }


    dll* traversal(dll* head){

        dll* p=head;

        while(p->next!=NULL){
            printf("%d ",p->data);
            p=p->next;
        }
         printf("%d ",p->data);
    }

    dll* revtraversal(dll* head){

        dll* p=head;

        while(p->next!=NULL){
           p=p->next;
           }

        while(p->prev!=NULL){
          printf("%d ",p->data);
          p=p->prev;
         
    }
     printf("%d ",p->data);
    }

    dll* insertion(dll* head){

        dll* p=head;
        dll* ptr=(dll*)malloc(sizeof(dll));
        ptr->data=34;
        ptr->next=p;
        ptr->prev=NULL;
        return ptr;
    } 
    
    dll* insertionend(dll* head,int data){

            dll* p=head;
            dll* q=(dll*)malloc (sizeof(dll));
            q->data=data;
            while(p->next!=NULL){
                p=p->next;

            }
            p->next=q;
            q->prev=p;
            q->next=NULL;
            return head;

    }  

    dll* deletionbeg(dll* head){
          dll* p=(dll*)malloc (sizeof(dll)); 
        p=head;
        
        head=head->next;

       
        free(p);
        return head;
    }

    dll* deletionend(dll* head){

        dll* p=(dll*)malloc(sizeof(dll));
        p=head;
           dll* q=(dll*)malloc(sizeof(dll));
        q=head->next;

        while(q->next!=NULL){
            p=p->next;
            q=q->next;
        }
        p->next=NULL;
        free(q);
        return head;

    }

    dll* deletionbet(dll* head , int index)
    {
        
        dll* p=(dll*)malloc(sizeof(dll));
        p=head;
        dll* q=(dll*)malloc(sizeof(dll));
        q=head->next;

        int i=0;

        while(i!=index-1){
            p=p->next;
            q=q->next;
            i++;
        }
        p->next=q->next;
       ( q->next)->prev=p->next;
       free(q);
       return head;



    }
    int main(){

    dll *head;
    dll *first;
    dll *second;
    dll *third;
    dll *four;

    head=(dll*)malloc(sizeof(dll));
    first=(dll*)malloc(sizeof(dll));
    second=(dll*)malloc(sizeof(dll));
    third=(dll*)malloc(sizeof(dll));
    four=(dll*)malloc(sizeof(dll));

    head->prev=NULL;
    head->data=18;
    head->next=first;

    first->prev=head;
    first->data=99;
    first->next=second;
     
    second->prev=first;
    second->data=92;
    second->next=third;

    third->prev=second;
    third->data=7;
    third->next=four;

    four->prev=third;
    four->data=3;
    four->next=NULL;   
    traversal(head);
    printf("\n***************\n");
    max(head);
    // traversal(head);

    
     
     

    return 0;
}