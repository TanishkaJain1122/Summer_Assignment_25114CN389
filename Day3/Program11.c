//Write a program to find GCD of two numbers
#include<stdio.h>
int main(){
    int a,b,temp;
    printf("enter a");
    scanf("%d", &a);
    printf("enter b");
    scanf("%d", &b);
    while(b!=0){
        temp=b;
        b=a%b;
        a=temp;
    }
    printf("GCD is %d", a);
    return 0;
}