//Write a program to count the digit in a number
#include<stdio.h>
int main(){
    int n,i,count=0;
    printf("enter n");
    scanf("%d",&n);
    while(n>0){
        n=n/10;
        count++;
    }
    printf("number of digits is %d",count);
    return 0;
}