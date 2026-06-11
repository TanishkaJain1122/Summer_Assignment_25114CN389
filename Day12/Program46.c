//Write a program to write function for armstrong
#include <stdio.h>
int isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    
    while (num > 0) {
        int digit = num % 10;
        sum += digit * digit * digit; // Cube of the digit
        num /= 10; // Remove the last digit
    }
    
    return (sum == originalNum); // Check if the sum is equal to the original number
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.", num);
    } else {
        printf("%d is not an Armstrong number.", num);
    }
    
    return 0;
}