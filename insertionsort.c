#include<stdio.h>
void array(int* arr, int n){
    for(int i=0;i<=n-1;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

}
void sort(int* arr,int n){
    for(int i=1;i<=n-1;i++){
        int key=arr[i];
        int j=i-1;
        while (j>=0 && arr[j]>key) {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }

}
int main(){
    int n=6;
    int arr[n];
    printf("Enter the element in array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    } 
    printf("The array is: ");   
    array(arr,n);
    sort(arr,n);
    printf("The new sorted array is: ");
    array(arr,n);
    return 0;
}
