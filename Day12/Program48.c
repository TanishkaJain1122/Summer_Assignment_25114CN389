//Write a program to write function for perfecrt number
#include <stdio.h>
int isPerfect(int num) {
    int sum = 0;
    
    // Calculate the sum of proper divisors
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    
    return (sum == num); // Check if the sum is equal to the original number
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (isPerfect(num)) {
        printf("%d is a perfect number.", num);
    } else {
        printf("%d is not a perfect number.", num);
    }
    
    return 0;
}