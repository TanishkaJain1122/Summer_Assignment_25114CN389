//Write a program to convert binary to decimal
#include<stdio.h>
int main(){
    int n, r, sum = 0, p = 1;
    printf("Enter a binary number : ");
    scanf("%d", &n);
    while(n > 0){
        r = n % 10;
        sum = sum + r * p;
        p = p * 2;
        n = n / 10;
    }
    printf("Decimal representation : %d", sum);
}