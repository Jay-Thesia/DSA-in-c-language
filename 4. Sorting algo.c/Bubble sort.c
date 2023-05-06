#include<stdio.h>
#define size 6

	int main(){
	
	
	// printf("enter the size please\n");
	// scanf("%d",&size);
	// it is adaptive(sorted lesss time),stable(order same ),inplace(more ip no more space)

	int a[6];
	int temp,i,j;
	for(int i=0;i<size;i++){
		printf("enter the elements \n");
		scanf("%d",&a[i]);
	}

	for( i=0;i<size-1;i++){
		for ( j = 0; j < size-i-2; j++)
		{
			if(a[j]>a[j+1]){
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;

			}
			
		}
	
		
	}

	
	for( i=0;i<size-1;i++){
	
		
			printf("%d ",a[i]);
		}
		
	
	
	return 0;
}