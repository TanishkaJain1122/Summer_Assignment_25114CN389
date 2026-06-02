//write a progrram to check whether a number is palindrome or not

#include <stdio.h>
int main(){
    int num,rev=0,r;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num>0){
        r=num%10;
        rev=rev*10+r;
        num=num/10;
    }
    if(rev==num){
        printf("The number is a palindrome.");
    }
    else{
        printf("The number is not a palindrome.");
    }
    return 0;
}