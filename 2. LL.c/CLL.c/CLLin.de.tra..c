#include<stdio.h>
#include<stdlib.h>

    typedef struct node{

        int data;
        struct  node *next;
            
    }sll;


   

  sll* deletionbeg(sll* head){
   
     sll*  p=head;
      sll* q=head;
      p=p->next;
      while(p->next!=head){
          p=p->next;
      }
      head=head->next;
      p->next=head;
      free(q);
      return head;
      
  }

  sll* deletionbet(sll* head,int index){

      
      sll*p=head;
      
      sll* q=head->next;
      int i=0;
      while (i!=index-1)
      {
      p=p->next;
      q=q->next;
      i++;
      } 

      p->next=q->next;
      free(q);
      return head;
      

  }

  sll* deletionend(sll* head){
      sll* p=head;
      sll* q=head->next;

      do
      {
     p=p->next;
     q=q->next;
      } while (q->next!=head);

      p->next=head;
      free(q);
      return head;
      
  }

  sll* deletionnode(sll* head , sll* node){
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

    void traversal(sll* head){

        sll* p;
        p=head;
           
        do
        {
            printf("%d\n",p->data);
            p=p->next;
        }while (p!=head);
        
    }

    sll* insertionst(sll* head,int data){

            sll* ptr=(sll*)malloc(sizeof(sll));
            ptr->data=data;
           
            sll* p=head;
             do
            {
               p= p->next;
        }   while (p->next!=head);
            
             p->next=ptr;
            ptr->next=head;
            
            return ptr;
            
            
    }

    sll* insertionend(sll* head,int data){

         sll* ptr=(sll*)malloc(sizeof(sll));
         ptr->data=data;
         sll* p;
         p= head;
        sll* q=head->next;
         do
         {
             p=p->next;
            q= q->next;
         } while (q->next!=head);

         q->next=ptr;
         ptr->next=head;
         return head;
         
    }

    sll* insertionbet(sll* head,int data,int index){
        sll* ptr=(sll*)malloc(sizeof(sll));
         ptr->data=data;
         sll* p;
         p= head;
         int i=0;
         while (i!=index-1){
             p=p->next;
             i++;
         }
          ptr->next=p->next;
         p->next=ptr;
       
         return head;

    }

    sll* insertionnode(sll* head,int data,sll* node){
        sll* ptr=(sll*)malloc(sizeof(sll));
         ptr->data=data;
         sll* p;
         p= head;

         while(p!=node){

             p=p->next;
         }
        ptr->next=p->next;
        p->next=ptr;
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
        fifth ->next=head;

        traversal(head);
         printf("*******************\n");
        // head=insertionst(head,98);
        // traversal(head);
        //  printf("*******************\n");
        //  head=insertionend(head,34);
        //  traversal(head);
        //   printf("*******************\n");
       head=deletionbet(head,3);
       traversal(head);

    return 0;
}