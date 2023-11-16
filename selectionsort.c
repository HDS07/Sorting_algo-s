#include<stdio.h>

void swap(int* x,int*y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int n,i,min;
    printf("enter the no. of elements : ");
    scanf("%d",&n);
    int arr[n];
    
    for(i=0;i<n;i++){
        printf("\nEnter the %d position element:",i);
        scanf("%d",&arr[i]);
    }
     for(i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
        if(arr[j]<arr[min]){
            min=j;
        }
    }
    if(min!=i){
        swap(&arr[i],&arr[min]);
    }
     }
     printf("\nThe sorted element are : ");
      for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }


    return 0;
}