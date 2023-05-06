#include<stdio.h>
#include<stdlib.h>

typedef struct sll
{
    int data;
    struct sll *next;
    
}sll;

int c=0;
int count(sll* head){

    sll* p=head;
    while (p->next!=NULL)
    {
        p=p->next;
        c++;
    }
    c++;
    printf("the nodes are %d \n",c);
    
}


int reverse(sll* head){

    
    if(head->next!=NULL){
    reverse(head->next);
    printf("%d\n",head->data);
    }

    else
     printf("%d\n",head->data);
}


    int max(sll* head){

        sll* p=head;
        int max ;
        max =p->data;
        while(p->next!= NULL){
            if(p->data>=max ){

                max =p->data;
            }
            p=p->next;
        }
         if(p->data>=max ){
                max =p->data;
            }
            printf("%d",max );
    }

    sll* concat(sll* head ,sll* head2){

        sll* p=head ;
        sll* q=head2;
         printf("%d\n",p->data);
        while (p->next!=NULL){
            p=p->next;
            printf("%d\n",p->data);

        }
        p->next=q;
        while(p->next!=NULL){
            p=p->next;
            printf("this is concated %d \n",p->data);
        }
          
    }

    int sum(sll* head){

        sll* p=head;
        int sum1=0;

        while(p->next!=NULL){

             sum1+=p->data;
            p=p->next;
        }
       sum1+=p->data;
       printf("%d is sum",sum1);
    }
        
    
    int main(){


        sll* head2;
        sll* second2;
        sll* third2;
        sll* fourth2;
        sll* fifth2;

        

        head2 = (sll*) malloc(sizeof(sll));
        second2 = (sll*) malloc(sizeof(sll));
        third2 = (sll*) malloc(sizeof(sll));
        fourth2 = (sll*) malloc(sizeof(sll));
        fifth2 = (sll*) malloc(sizeof(sll));


        head2 -> data= 45;
        head2 ->next=second2;

        
        second2 -> data=3;
        second2->next=third2;

        
        third2 -> data=7;
        third2 ->next=fourth2;

        
        fourth2 -> data=666;
        fourth2 ->next=fifth2;

        fifth2 -> data=764 ;
        fifth2 ->next=NULL;

         
        sll* head ;
        sll* second ;
        sll* third ;
        sll* fourth ;
        sll* fifth ;

        

        head  = (sll*) malloc(sizeof(sll));
        second  = (sll*) malloc(sizeof(sll));
        third  = (sll*) malloc(sizeof(sll));
        fourth  = (sll*) malloc(sizeof(sll));
        fifth  = (sll*) malloc(sizeof(sll));


        head  -> data=56;
        head  ->next=second ;

        
        second  -> data= 23;
        second ->next=third ;

        
        third  -> data= 8;
        third  ->next=fourth ;

        
        fourth  -> data=90;
        fourth  ->next=fifth ;

        fifth  -> data=450;
        fifth  ->next=NULL;

    //   count(head);
    //   reverse(head);
    // concat(head ,head2);
    sum(head);
    return 0;
}