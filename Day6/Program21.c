//Write a  program to convert Decimal to Binary
#include<stdio.h>
int main(){
    int n, r, sum = 0, p = 1;
    printf("Enter a decimal number : ");
    scanf("%d", &n);
    while(n > 0){
        r = n % 2;
        sum = sum + r * p;
        p = p * 10;
        n = n / 2;
    }
    printf("Binary representation : %d", sum);
}