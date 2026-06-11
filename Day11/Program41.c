//Write a program to write function to find sum of two number
#include <stdio.h>
int sum(int a, int b) {
    return a+b;}
int main() {
    int a,b;
    printf("Enter a");
    scanf("%d", &a);
    printf("Enter b");
    scanf("%d", &b);
    printf("The sum of a and b is %d", sum(a,b));
    return 0;
}