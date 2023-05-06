#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    
    char s1[12]="hi ok than";
    char s2[16]="concatnation";
    char s3[34];
    char s4[23]="don't be shy baby";
    char *token;
    
    printf(s2);

    //1. add or concate two string
    // puts(strcat(s1,s2));
    
    //2. take the length of string in terms or int
    int i=strlen(s2);
    printf("%d\n",i);
    

    //3. reverse the string 
    printf(strrev(s2));
    printf("\n");

    // 4.copy the string
    printf(strcpy(s3,s1));
    printf("\n");


    // 5. compare the string 
    // 1.If character in leftStr is lexicographically after the character of rightStr positive val we take the same example 
    /* 2.If character in leftStr is lexicographically before the character of rightStr  negative ans 
    3. All characters of strings are same  Zero ( 0 ) */

    printf("%d",strcmp(s1,s2));

    /* 6. split the string we use strtok function */
    token=strtok(s4," ");
    while(token!=NULL){
    printf("%s\n",token);
    token=strtok(NULL," ");
    }
    

    return 0;

}