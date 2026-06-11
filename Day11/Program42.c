//Write a program to to Write function to find the maximum
#include <stdio.h>
int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
int main() {
    int a,b;
    printf("Enter a");
    scanf("%d", &a);
    printf("Enter b");
    scanf("%d", &b);
    printf("The maximum of a and b is %d", max(a,b));
    return 0;
}