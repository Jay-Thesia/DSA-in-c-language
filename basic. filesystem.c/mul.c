#include<stdio.h>

    int main(){
    FILE *fptr;
    char c;
    int num;
    fptr=fopen("sardar.txt","w");
   
    printf("enter the name\n");
    while(c!='\n'){
    scanf("%c",&c);
}
    printf("enter the no");
    scanf("%d",&num);//name1,num;
    while(c!=EOF){
    fprintf(fptr,"%c",c);
    }

    fprintf(fptr,",%d",num);
    
  

    return 0;
}