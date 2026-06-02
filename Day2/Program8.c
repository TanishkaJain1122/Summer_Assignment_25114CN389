//Write a program to check whether a number is palindrome or not
#include<stdio.h>
int main(){
    int n, reverse = 0, r, original;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    while(n != 0){
        r = n % 10;
        reverse = reverse * 10 + r;
        n = n/10;
    }
    if(original == reverse){
        printf("%d is a palindrome number.", original);
    } else {
        printf("%d is not a palindrome number.", original);
    }
    return 0;
}