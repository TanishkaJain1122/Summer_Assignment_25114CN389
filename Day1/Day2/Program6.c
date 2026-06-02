//write a program to Reverse a number
#include <stdio.h>
int main(){
    int num,rev=0,r;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num>0){
        r=r%10;
        rev=rev*10+num%10;
        num/=10;
    }   
    printf("The reverse of the number is: %d",rev);
    return 0;
}