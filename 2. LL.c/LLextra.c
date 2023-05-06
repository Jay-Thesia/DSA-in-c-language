#include<stdio.h>
#include<stdlib.h>


typedef struct extr{

    int cof;
    int exp;
    struct extr * next;
    
}asll;


       


asll* add(asll*head1,asll*head2){
        
        asll *f3;
        asll* p;
        asll* q;
        asll* head3;
       
        f3=(asll*)malloc(sizeof(asll));
        f3->next=NULL;
        head3=f3;
        p=head1;
        q=head2;
        

    while(p!=NULL && q!=NULL){

       
            f3->cof=p->cof+q->cof;
            f3->exp=p->exp;
           
            p=p->next;
            q=q->next;
            f3->next=(asll*)malloc(sizeof(asll));
            f3=f3->next;  
            f3->next=NULL;   

        }
           
        while(head3->next != NULL) 
        { 
        printf("%dx^%d", head3->cof, head3->exp); 
        head3 = head3->next; 
        if(head3->next != NULL) 
            printf(" + "); 
        } 
      
         
           
}



    int main(){

       
        asll *f1;
        asll *f2;
        f1=(asll*)malloc(sizeof(asll));
        f2=(asll*)malloc(sizeof(asll));

        asll* head1;
        asll* second1;
        asll* third1;

        asll* head2;
        asll* second2;
        asll* third2;

        asll* head3;
        asll* second3;
        asll* third3;

      

        head1 = (asll*) malloc(sizeof(asll));
        second1 = (asll*) malloc(sizeof(asll));
        third1 = (asll*) malloc(sizeof(asll));

        head2 = (asll*) malloc(sizeof(asll));
        second2 = (asll*) malloc(sizeof(asll));
        third2=(asll*)malloc(sizeof(asll));

        head3 = (asll*) malloc(sizeof(asll));
        second3 = (asll*) malloc(sizeof(asll));
        third3=(asll*)malloc(sizeof(asll));

        head1->cof=5;
        head1 -> exp=2;
        head1 ->next=second1;

        second1->cof=3;
        second1 -> exp=1;
        second1->next=third1;

        third1->cof=18;        
        third1 ->exp=0;
        third1 ->next=NULL;

        
       
        head2->cof=3;
        head2 -> exp=2;
        head2 ->next=second2;

        second2->cof=4;
        second2 -> exp=1;
        second2->next=third2;

        third2->cof=3;        
        third2 ->exp=0;
        third2 ->next=NULL;
        
        
        f1=head1;
        f2=head2;
         
        add(f1,f2);
      
    return 0;
}