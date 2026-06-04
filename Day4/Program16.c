//Write a program to print Armstrong numbers in a range
#include<stdio.h>
int main(){
    int n1,n2, original, sum = 0, digit;
    printf("Enter the range (n1 n2): ");
    scanf("%d %d", &n1, &n2);
    printf("Armstrong numbers in the range %d to %d are:\n", n1, n2);
    for(int i = n1; i <= n2; i++){
        original = i;
        sum = 0;
        while(original != 0){
            digit = original % 10;
            sum += digit * digit * digit;
            original /= 10;
        }
        if(sum == i){
            printf("%d\n", i);
        }
    }
    return 0;
}