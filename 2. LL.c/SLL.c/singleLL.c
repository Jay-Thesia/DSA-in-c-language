#include<stdio.h>
#include<stdlib.h>

    typedef struct node{

            int data;
            struct  node *next;
            
           }sll;

        void lltraversal(sll *ptr){
            while(ptr!=NULL){
            printf("%d\n",ptr -> data);
            ptr= ptr->next;
        }
        }

        sll* insertionbrg(sll *head){
            sll* ptr;
            ptr=(sll*) malloc (sizeof(sll));
            ptr -> data = 45;
            ptr -> next=head;
            return ptr;
            
        }

        sll* insertionend(sll* head,int data){

            sll* ptr;
            ptr=(sll*) malloc (sizeof(sll));
            sll* p=head;
        
                
            while(p->next!=NULL){
            p=p->next;
                
            } 
            if(p ->next== NULL){

                ptr->data=data;
                p -> next=ptr;
                ptr->next=NULL;
            
                return head;

            }
        }

        int search(sll* head ,int find){

            sll* p;
        
            p=head;
            sll* i=(sll*)malloc(sizeof(sll));
              
                if(p->data==find){
                printf("y\n");
                
                
                }
            

            while(p->next!=NULL){
               p=p->next;
                
                if(p->data==find){
                printf("y\n");
                
                break;
                }
            }
            if (p->data!=find)
                printf("n");
        }
        sll* insertioncenter(sll* head,int data,int index){
            
            sll* ptr;
            ptr=(sll*) malloc (sizeof(sll));
            sll* p=head;
            int i=0;

            while(i!=index-1){
                p=p->next;
                i++;
            }

            ptr->data=data;
            ptr->next=p->next;
            p->next=ptr;
            return head;

        }

    sll* insertionprev(sll* head,int data,sll* prev){
            
            sll* ptr;
            ptr=(sll*) malloc (sizeof(sll)); 
            sll* q=prev;

            ptr->data=data;
            ptr->next=prev->next;
            prev->next=ptr;
            return head;

        }

        sll* deletionhead (sll* head){
            sll* ptr=(sll*) malloc (sizeof(sll));
            ptr=head;
            head= head->next;
            free(ptr);
            return head;
        } 

    


                
            sll* deletionindex (sll* head,int index){

                sll* p=(sll*)malloc(sizeof(sll));
                p=head;
                sll* q=(sll*)malloc(sizeof(sll));
              
                int i=0;
                while(i!=index-1){
                    p=p->next;
                    i++;
                }
                
                q=p->next;
                p->next=q->next;
                free(q);
                return head;

        } 


        sll* deletionend(sll* head){
                sll* p=(sll*)malloc(sizeof(sll));
                p=head;
                sll* q=(sll*)malloc(sizeof(sll));
                  q=head->next;
                
                while(q->next!=NULL){
                    p=p->next;
                    q=q->next;
                }
                
                p->next=NULL;
                free(q);
                return head;
                

    }

    sll* deletionafter(sll* head , sll* node){

          sll* p=(sll*)malloc(sizeof(sll));
                p=head;
                sll* q=(sll*)malloc(sizeof(sll));
                  q=head->next;
                

                while(p!=node){
                    p=p->next;
                    q=q->next;

                }
                p->next=q->next;
                free(q);
                return head;

    }
            
    int main(){

        sll* ptr;
        sll* head;
        sll* second;
        sll* third;
        sll* fourth;
        sll* fifth;

        

        head = (sll*) malloc(sizeof(sll));
        second = (sll*) malloc(sizeof(sll));
        third = (sll*) malloc(sizeof(sll));
        fourth = (sll*) malloc(sizeof(sll));
        fifth = (sll*) malloc(sizeof(sll));


        head -> data=56;
        head ->next=second;

        
        second -> data=3;
        second->next=third;

        
        third -> data=18;
        third ->next=fourth;

        
        fourth -> data=90;
        fourth ->next=fifth;

        fifth -> data=76;
        fifth ->next=NULL;

        lltraversal(head);

        printf("***************************\n");
        // head=deletionafter(head,second);
        // lltraversal(head);
        search(head,56);
        return 0;
    }