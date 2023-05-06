#include<stdio.h>


void encrypt(char *ptr){

    int i=0;
    char *c=ptr;
  
    while(*ptr!='\0'){
        *ptr=*ptr+1;
        ptr++;
    

    }
}     
    int main(){
    char s[]="jaidhd";
    encrypt(s);
    printf("%s",s);


    

    return 0;
}