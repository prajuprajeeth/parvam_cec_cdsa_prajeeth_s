#include<stdio.h>
int main(){
    int row;
    printf("enter te number of rows:");
    scanf("%d", &row);
    for(int i=1;  i<=row; i++){
        for(int j=1; j<=row-i; j++){
            printf(" ");
        }
        for(int j=1; j<=(2*i-1); j++){
        printf("*");
        }
        printf("\n");
    }    

}     