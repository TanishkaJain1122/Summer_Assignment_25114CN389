//Write a program to write function for palindrome
#include <stdio.h>
int isPalindrome(char str[]) {
    int left = 0;
    int right = 0;
    
    // Find the length of the string
    while (str[right] != '\0') {
        right++;
    }
    right--; // Move back to the last character
    
    // Check for palindrome
    while (left < right) {
        if (str[left] != str[right]) {
            return 0; // Not a palindrome
        }
        left++;
        right--;
    }
    return 1; // Is a palindrome
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    
    if (isPalindrome(str)) {
        printf("%s is a palindrome.", str);
    } else {
        printf("%s is not a palindrome.", str);
    }
    
    return 0;
}