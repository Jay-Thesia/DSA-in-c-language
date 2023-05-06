#include<stdio.h>
#define n 6

void swap( int *x,int *y){

    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}



int partitionindex(int a[n],int low ,int high){

    int pivot=a[low];
    int i=low+1;
    int j=high;

    while(i<=j){
    while(a[i]<=pivot)
        i++;
    
    while (a[j]>pivot)
    {
        j--;
    }
    

    if(i<j)
    swap(&a[i],&a[j]);
    }

    if(j<i)
    swap(&a[low],&a[j]);

    return j;



}


void quicksort(int a[n],int low ,int high){

    int pi;

    if(low<high){
     pi=partitionindex(a,low,high);// it will give us pivot
        quicksort(a,low,pi-1);//left subarray
        quicksort(a,pi+1,high);//right subarray
    }
}




void display(int a[n]){

      for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    
}

int main(){
    
    
    int a[n];
   
    for(int i=0;i<n;i++){
        printf("enter the %d element\n",i+1);
        scanf("%d",&a[i]);
    }

    display(a);
    quicksort(a,0,5);
    display(a);


    

    return 0;
}