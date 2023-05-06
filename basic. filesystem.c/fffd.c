#include<stdio.h>

    int main(){
    FILE *fptr;
    int n;

  
    fptr=fopen("mul.c","r");

    fscanf(fptr,"%d",&n);
   
    fclose(fptr);
    printf("%d",n);
 

    return 0;
}