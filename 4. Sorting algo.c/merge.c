#include<stdio.h>
#include<stdlib.h>
#define n 6


void merge(int*a,int mid,int low,int high){

    int i=low;
    int j=mid+1;
    int k=low;
    int *b=(int*)malloc(sizeof(int));
    

    while(i<=mid && j<=high){
        if(a[i]<a[j]){
            b[k]=a[i];
            i++;
            k++;
        }
        else{
            b[k]=a[j];
            j++;
            k++;
        }
    }

    while(i<=mid){
        b[k]=a[i];
            i++;
            k++;
    }

    while(j<=high){
         b[k]=a[j];
            j++;                                                                     
            k++;

    }

    for(int w=low;w<=high;w++){
        a[w]=b[w];
    }


}


int mergest(int *x,int low,int high){

  

    if(low<high){
    int mid=((low+high)/2);
    mergest(x,low,mid);
    mergest(x,mid+1,high);
    merge(x,mid,low,high);
    }
}


void display(int *a){

      for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    
}

    int main(){
   
   
   int *a=(int* )malloc (n*sizeof(int));

    for(int i=0;i<n;i++){

        printf("enter the element please\n");
        scanf("%d",&a[i]);
    }

    display(a);
    mergest(a,0,n-1);
    display(a);

    return 0;
}