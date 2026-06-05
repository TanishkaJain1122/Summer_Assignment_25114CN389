//Write a Program to check  Strong Number
#include<stdio.h>
int main(){
    int n, original, sum = 0, digit, fact;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    while(n != 0){
        digit = n % 10;
        fact = 1;
        for(int i = 1; i <= digit; i++){
            fact *= i;
        }
        sum += fact;
        n /= 10;
    }
    if(sum == original){
        printf("%d is a Strong number.", original);
    } else {
        printf("%d is not a Strong number.", original);
    }
    return 0;
} 