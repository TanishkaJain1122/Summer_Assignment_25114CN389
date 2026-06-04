//Write a program to check Armstrong Number
#include<stdio.h> 
int main(){
    int n, original, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    while(n != 0){
        digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }
    if(sum == original){
        printf("%d is an Armstrong number.", original);
    } else {
        printf("%d is not an Armstrong number.", original);
    }
    return 0;
}