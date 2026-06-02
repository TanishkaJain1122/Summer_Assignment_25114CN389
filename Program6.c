//Write a program to reverse a number
#include<stdio.h>
int main(){
    int n, reverse = 0, r;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n != 0){
        r = n % 10;
        reverse = reverse * 10 + r;
        n /= 10;
    }
    printf("Reversed number: %d", reverse);
    return 0;
}