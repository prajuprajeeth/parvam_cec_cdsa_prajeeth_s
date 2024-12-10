#include<stdio.h>
int main(){
    int size;
    printf("enter the size of an array:");
    scanf("%d" ,&size);
    int arr[size];
    printf("enter the elements of an array:");
    for(int i=0; i<size; i++){
        scanf("%d" ,&arr[i]);
    }
    int target=0;
    printf("enter the target element which need to be found:");
    scanf("%d, &target);
    for(int i=0; i<size; i++){
        printf("%d\t", arr[i]);
    }    
    printf("\nreversed array elements are as follows:\n");
    for(int i=size-1; i>=0; i--){
        printf("%d\t", arr[i]);
    }