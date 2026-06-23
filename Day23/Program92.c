//Find Maximum Occuring character
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count[256] = {0};
    int max = 0;
    char ch;

    printf("Enter string: ");
    gets(str);

    for(int i = 0; str[i] != '\0'; i++)
        count[(unsigned char)str[i]]++;

    for(int i = 0; i < 256; i++) {
        if(count[i] > max) {
            max = count[i];
            ch = i;
        }
    }

    printf("Maximum occurring character: %c", ch);
    printf("\nFrequency: %d", max);

    return 0;
}