  #include<stdio.h>
  #include<math.h>


    char oprst[25]={'\0'};
    char outst[25]={'\0'};
    int oprtop=-1;
    int outtop=-1;
    char ch;
    
    char pushopr(char ele){
        if (oprtop==24)
            printf("stack is full\n");
        else{
            oprtop++;
            oprst[oprtop]=ele;
            printf("the element %c is inserted\n ",ele);
            
        }
          
    }
    
    char popopr(){
        if(oprtop!=-1){
            ch=oprst[oprtop];
            oprtop--;
            printf("%c is poped\n",ch);
        }
        return ch;
        
    }
 
    
    char displayopr(){
        int i=0;
        for(i=0;i<=oprtop;i++){
            printf("the oprst is %c \n",oprst[i]);
        }
    }
    
    
    
    void pushout(char ele){
        if (outtop==24)
            printf("stack is full");
        else{
            outtop++;
            outst[outtop]=ele;
            printf("the element %c is inserted\n ",ele);
            
        }
    }
    
    void displayout(){
        int i=0;
        for(i=0;i<=outtop;i++){
            printf("the outst is %c\n ",outst[i]);
        }
    }
    
    char peepopr(){
        
         if(oprtop!=-1){
            ch=oprst[oprtop];
         }  
           return ch;
    }
    
int main(){

    char infix[25]={'\0'};
    char ele,popele;
    int i=0;
    int result;

    while(infix[i]!='\0'){
        ele=infix[i];

        int op2=popopr();
        int op1=popopr(); 

        if(ele=='^' || ele=='$' || ele=='*' || ele=='+' || ele=='-' || ele=='/'){

            switch(ele){

                case '+':
                    pushout(op1+op2);
                    break;

                case '-':
                    pushout(op1-op2);
                    break;

                case '*':
                    pushout(op1*op2);
                    break;

                case '/':
                    pushout(op1/op2);
                    break;

                case '^':
                    pushout(pow(op1,op2));
                    break;
            }

        }

        else
        {
            pushopr(ele);
        }
        i++;
        
    }

    printf("%d is the answer \n",outst);
    return 0;
}