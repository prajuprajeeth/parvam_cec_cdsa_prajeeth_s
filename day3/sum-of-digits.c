#include<stdio.h>
int main(){
    int num ,sum=0,digits; 
    printf("enter any number to get the sum of digits:");
    scanf("%d",&num);
    printf("sum of %d is:",num);
    do{
        digits=num%10;
        sum=sum+digits;
        num=num/10;
    }while(num>0);
    printf("%d",sum);
}     
