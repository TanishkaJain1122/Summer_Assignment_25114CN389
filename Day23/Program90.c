//Find First Repeating Character
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count[256] = {0};

    printf("Enter string: ");
    gets(str);

    for(int i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;
        if(count[(unsigned char)str[i]] == 2) {
            printf("First repeating character: %c", str[i]);
            return 0;
        }
    }

    printf("No repeating character found.");
    return 0;
}