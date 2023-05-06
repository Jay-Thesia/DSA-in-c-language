#include<stdio.h>
#include<string.h>

void theBoringfun(){

  printf("\nJaaaaay\n");
  char *p="AIR1!";
  printf(p-5);
}

int main(){
  theBoringfun();
  char sr[5];
  char s[]="jaudjd";

//  method 1 for input
// printf("enter the gets string ");
//  it can take the space after words
//   gets(sr);
                                                        // enter the gets string jey enter
                                                        // this is the printf ans : 
                                                        // jey enter
                                                        // this is the puts  ans : 
                                                        // jey enter



// method 2 using scanf but it will no the space after character
// after space no words
// printf("enter the scanf string ");
 scanf("%[^\n]s",sr);
                                                        //  ex.  enter the scanf string  Hay learn
                                                        // this is the printf ans : 
                                                        // Hay
                                                        // this is the puts  ans : 
                                                        // Hay


                

//  method1 for the print the string 
    printf("%s\n",sr);
// method 2 for the print the string
    puts(sr);

  

  return 0;
  }